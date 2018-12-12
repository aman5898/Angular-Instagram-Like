import { Component, OnInit } from '@angular/core';
import { NgForm } from '@angular/forms';
import * as firebase from 'firebase';      //dont know what happened here
import { log } from 'util';
import { NotificationService } from 'src/app/shared/notification.service';

@Component({
  selector: 'app-sign-up',
  templateUrl: './sign-up.component.html',
  styleUrls: ['./sign-up.component.css']
})
export class SignUpComponent implements OnInit {

  constructor(private notifier:NotificationService) { }

  ngOnInit() {

    
  }

  onSubmit(form:NgForm){
      const fullname=form.value.fullname;
      const email= form.value.email;
      const password = form.value.password;

      firebase.auth().createUserWithEmailAndPassword(email,password)
      .then(userData=>{
        userData.sendEmailVerification();
        
        const message=`A veification email has been sent to ${email}. Kindly check your inbox and follow the steps in the verification email. Once verification is complete, please login to the application`
        this.notifier.display('success',message);

        return firebase.database().ref('users/'+userData.uid).set({
          email:email,
          uid:userData.uid,
          registerationDate: new Date().toString(),
          name:fullname
        })   
        .then(()=>{
          firebase.auth().signOut(); //even when the email is not verified firebase will store its data in local storage which is not good
        });
      })
      .catch(err=>{
        this.notifier.display('error',err.message);
        console.log(err);        
      });
  }

}
