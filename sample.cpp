#include<iostream>
using namespace std;

int main() {
  //  cout << "Hello World!" << endl;
  /*if statements*/
/*int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >=18) {
        cout << "You are an adult." << endl;
    } 
    else if(age<0){
        cout << "Invalid age entered." << endl;
    }
    else {
        cout << "You are a minor." << endl;
    }
    return 0;*/
    /*switches  */

/*    int month;
    cout << "Enter the month number (1-12): ";
    cin >> month;   
    switch(month){
        case 1:
            cout << "January" << endl;
            break;
        case 2:
            cout << "February" << endl;             
            break;
        case 3:
            cout << "March" << endl;             
            break;
        case 4:
            cout << "April" << endl;        
            break;
        case 5:     
            cout << "May" << endl;             
            break;  
        case 6:
            cout << "June" << endl;             
            break;  
        case 7:
            cout << "July" << endl; 
            break;
        case 8:
            cout << "August" << endl;
            break;
        case 9:
            cout << "September" << endl;
            break;  
        case 10:
            cout << "October" << endl;  
            break;
        case 11:    
            cout << "November" << endl;  
            break;      
        case 12:
            cout << "December" << endl;
            break;
        default:
            cout << "Invalid month number." << endl;
            break;        

    }*/

    /*ternary operator*/

   /* int grade;
    cout << "Enter your grade (0-100): ";
    cin >> grade;
    string result = (grade >= 60) ? "Pass" : "Fail";
    cout << "You " << result << "." << endl;

    int num;
    cout << "Enter a number: ";
    cin >> num;
    string result =(num %2==0) ?"even":"odd";
    cout << "The number is " << result << "." << endl;*/

    /*logical operators
    and &&
    or || 
    not !*/

    /*
    int temp;
    cout << "Enter the temperature : ";
    cin >> temp;
    if (temp > 30 && temp < 40) {
        cout << "It's a hot day." << endl;
    } 
    else if (temp >= 20 || temp <= 30) {
        cout << "It's a warm day." << endl;
    } 
    else if (temp >= 10 && temp < 20) {
        cout << "It's a cool day." << endl;
    } 
    else if (temp < 10) {
        cout << "It's a cold day." << endl;
    } 
    else {
        cout << "Invalid temperature entered." << endl;
    }
        */
       //for temperature we use  (temp-32.0)/1.8 fahrenheit to celsius conversion formula
       //convert fahrenheit to celsius (1.8*temp)+32.0 
  
  
       //string methods



  /*     string name;
       cin>>name;
       name.erase(0,3);
       cout<<"Your name is : "<<name<<endl;
       name.append("@gmail.com");
       cout<<"Your email is : "<<name<<endl;
       name.insert(5, "!! ");
       cout<<"Your username: "<<name<<endl;
       if(name.length()>12){
        cout<<"Your name is too long ."<<endl;
       }
        else{
            cout<<"Your name is valid "<<name<<endl;
        
       }

       */


       //while loop
    

      /* string name;
       while(name.empty()){
        cout<<"Enter your name : ";
        cin>>name;
       }
       cout<<"Hello "<<name<<endl;
      */


      /*Do while loop -- do some block of code first and 
                then repeat again if the condition is true!!*/
     /* 

      int num;
      
     do{
        cout<<"Enter a positive number : ";
        cin>>num;
      }while(num<=0);
      cout<<"THe number is : "<<num<<endl;

      */


      //for loop

/*
      for(int i=1;i<=10;i+=2){
        cout<<i<<endl;
      }
       cout<<"Hiii!!"<<endl;

*/


//Break & Continue statements
        /*break  -- break out of the loop
        Continue -- skip the current iteration */

/*
        for(int i=0;i<10;i++){
            if(i==4){
               // break;
               continue;
            }
            cout<<i<<endl;
        }

        */

        //Nested loops  loop inside another loop

      /*  for(int i=1;i<=5;i++){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
*/
/*
    int rows;
    int columns;
    char symbol;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    cout<<"Enter the number of columns : ";
    cin>>columns;
    cout<<"Enter the symbol : ";
    cin>>symbol;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<symbol<<" ";
        }
        cout<<endl;
    }
*/

    
}