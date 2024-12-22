#include <iostream>
using namespace std;

int main(){



    int eng=100,hindi=100,math=14;
    float total=eng+hindi+math;

    float per =total/300*100;
    cout<<"percentage is "<<per<<endl;

    if(eng>=33 && hindi>=33 && math>=33){
        cout<<"you are pass"<<endl;
        if(per>60 && per<=70){
        cout<<"grade 'c'";
    }else if(per>70 && per<=80){
        cout<<"grade 'b'";
    }else if(per>80 && per<=100){
        cout<<"grade 'a'";
    }
    
    


    }else{
         if(eng>=33 && hindi>=33 && math>=33){
        cout<<"you are supply"<<endl;
        if(per>60 && per<=70){
        cout<<"grade 'c'";
    }else if(per>70 && per<=80){
        cout<<"grade 'b'";
    }else if(per>80 && per<=100){
        cout<<"grade 'a'";
    }
    
        }else{
            cout<<"fail"<<endl;
            if(per<60 || per>70){
        cout<<"grade 'c'";
    }else if(per<70 || per>80){
        cout<<"grade 'b'";
    }else if(per<80 || per>=100){
        cout<<"grade 'a'";
    }
    
    
        }
    }


    




}

