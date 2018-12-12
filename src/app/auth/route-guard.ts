import {CanActivate} from "@angular/router";
import * as firebase from 'firebase';      //dont know what happened here

export class RouteGuard implements CanActivate{
    canActivate(){
        if(firebase.auth().currentUser){
            return true;
        }else{
            return false;
        }
    }
}