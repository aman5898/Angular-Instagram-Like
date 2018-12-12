import { Component, OnInit } from '@angular/core';
import * as firebase from 'firebase';      //dont know what happened here

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent implements OnInit{
  title = 'instagram-like';

  ngOnInit() {
    const config = {
      apiKey: "AIzaSyD_cycs-_-T9Opt9ShKGHKVkCtdr-aC2LQ",
      authDomain: "instagram-140f6.firebaseapp.com",
      databaseURL: "https://instagram-140f6.firebaseio.com",
      projectId: "instagram-140f6",
      storageBucket: "instagram-140f6.appspot.com",
      messagingSenderId: "931462966409"
    };
    firebase.initializeApp(config);
  }
}
