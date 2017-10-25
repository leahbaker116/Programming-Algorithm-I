 #include <iostream> 
 #include <string> // Need to include string 
 using namespace std; 
 
 struct monster{ //it's important to declare this beofre int main  
  string head;
  string eyes;  //Can you have more than one struct?
  string ears;  //Can you use other varibles in the struct? 
  string mouth;
  string nose;
 };
 
 int main()
 {
  cout<<"Monster A:"<<endl;
   monster monsterA;
   monsterA.head = "Zombus";  // . operator is very important 
   monsterA.eyes = "Vegitas";
   monsterA.ears = "Wackus";
   monsterA.nose = "Vegitas";
   monsterA.mouth = "Wackus";
   
   cout<<"Head:"<<monsterA.head<<endl; 
   cout<<"Eyes:"<<monsterA.eyes<<endl;
   cout<<"Ears:"<<monsterA.ears<<endl;
   cout<<"Nose:"<<monsterA.nose<<endl;
   cout<<"Mouth:"<<monsterA.mouth<<endl;
   
  cout<<"Monster B:"<<endl;
   monster monsterB;
   monsterB.head = "Franken";  
   monsterB.eyes = "Wackus";
   monsterB.ears = "Wackus";
   monsterB.nose = "Spritem";
   monsterB.mouth = "Vegitas";
   
   cout<<"Head:"<<monsterB.head<<endl; 
   cout<<"Eyes:"<<monsterB.eyes<<endl;
   cout<<"Ears:"<<monsterB.ears<<endl;
   cout<<"Nose:"<<monsterB.nose<<endl;
   cout<<"Mouth:"<<monsterB.mouth<<endl;
     
 }