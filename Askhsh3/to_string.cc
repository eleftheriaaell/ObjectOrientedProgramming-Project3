#include "to_string.h"

string to_String(int num){                            //converts an integer to string
    int cnt=-1, mod=10, n=num;
    string number="";
    
    char N[10];
    
    N[0]='0';
    N[1]='1';
    N[2]='2';
    N[3]='3';
    N[4]='4';
    N[5]='5';
    N[6]='6';
    N[7]='7';
    N[8]='8';
    N[9]='9';                                       //array filled with numbers as characters

    
    while(n > 0){
        int m=n%10;
        n=(n-m)/10;
        cnt++;
    }               //counts the number of digits in number
    
    while(cnt > 0){
        mod=mod*10;
        cnt--;
    }
   
    while(mod > 1){
        mod=mod/10;
        n=num/mod;                          //separates digits
        num=num-(n*mod);                    //organises the number
        for(int i=0; i<10; i++)
            if(i == n)
                number+=N[i];               //saves the right character in string
        
    }

    return number;              //returns string
}