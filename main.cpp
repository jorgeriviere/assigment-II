/******************************************************************************
C_STL_Library_Rivera
*******************************************************************************/
/////Jorge Rivera shopping list (vectors)
///Created on November 10,2020       
// Dr. Tyson/Tarrant County Community College
//The purpose of this assigment was to teach some basic in classes, vectors 
//This program illustrates basic concepts that will be used in C++ intro course

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <cassert>
#include <stack>
#include <set>
#include <utility>
#include <map>
using namespace std; 

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1{ 
    vector<int> vec; 
  
public: 
    MyClassVector1(vector<int> v)  
    { 
       vec = v; 
    } 
    void print() 
    { 
        /// print the value of vector 
        for (int i = 0; i < vec.size(); i++) 
            cout << vec[i] << " "; 
    } 
}; 
class MyClassVector2{
    vector<int> vec2; 
  
public: 
    MyClassVector2(vector<int> v)  
    { 
       vec2 = v; 
    } 
    void print() 
    { 
        /// print the value of vector 

        for (int i = 0; i < vec2.size(); i++) 
            cout << vec2[i] << " "; 
    } 
}; 
    
class MyClassVector3 { 
    vector<int>& vec3; 
  
public: 
    // this is the right way to assign 
    // the reference of stl container 
    MyClassVector3(vector<int>& arr) 
        : vec3(arr) 
    { 
    } 
    void print() 
    { 
        /// print the value of vector 
        for (int i = 0; i < vec3.size(); i++) 
            cout << vec3[i] << " "; 
    } 
};
int main(int argc,char* argv[])
{
    /****Section_Name***Vectors*/ 
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 
    //Expand this code to:
    //add 3 elements to the vd vector
    vd.push_back(11);
    vd.push_back(2);
    vd.push_back(3);
    //add 3 elements to the vi vector
    vi.push_back(666);
    vi.push_back(50);
    vi.push_back(20);
   // add 3 elements to the vs vector
    vs.push_back("food");
    vs.push_back("to");
    vs.push_back("eat");
   // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }
   cout << "\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vd.size(); i++)
   {
     cout << vd[i] << endl; 
   }

    //display the 3 elements in the vi vector
    cout<<"\nValues in vi: \n";
 for(int i = 0; i < vi.size(); i++)
   {
     cout << vi[i] << endl;
   }
   // display the 3 elements in the vs vector
cout<<"\nValues in vs:\n";
 for(int  i = 0; i < vs.size(); i++)
   {
     cout << vs[i] << endl;
   }
    /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

    vector<int> vec;
    vector<int> vec2;
    vector<int> vec3;
     cout<<"\nWhen class member is a vector object (not a reference)\n";
    for (int i = 1; i <= 5; i++) 
        vec.push_back(i); 
    MyClassVector1 obj(vec); 
    obj.print();
    
    cout<<"\nWhen using initialer list\n";
    for (int i = 1; i <= 5; i++) 
    vec2.push_back(i); 
    MyClassVector2 obj2(vec2); 
    obj2.print(); 
    
    cout<<"\nWhen class member is a vector a reference.\n";
    for (int i = 1; i <= 5; i++) 
        vec3.push_back(i); 
    MyClassVector3 obj3(vec3); 
    obj3.print(); 

      //Continue with MyClassVector2 and MyClassVector3
    /****Section_Name***STL_Iterators*/ 
    cout<<"\n\nSTL Iterator\n";
    vector<int>vint(10);
    vint[0]=10;
    vint[1]=20;
    vint[2]=30;
    vint[3]=40;
    vint[4]=50;
    vint[5]=60;
    vint[6]=70;
    vint[7]=80;
    vint[8]=90;
    vint[9]=100;
    vector<int>::iterator it;
    for (it =vint.begin();it !=vint.end();++it){
        cout<<" "<<*it;
}
    /****Section_Name*** Stack*/     //Write comments that help one better understand what the code is doing.
cout<<"\n\nStack section\n";
stack<int>st;
st.push(100);
assert (st.size()==1);
assert(st.top()==100);
cout<<"The top number is: "<<st.top();//here the top number of the stack is made into 100
st.top()=456;
assert(st.top()==456);
cout<<"\nThe new stack top number is: "<<st.top();//here the top number of the stack is made into 456
st.pop();
assert(st.empty()==true);//cout<<"\n "<<st.top();//cout is carried out, then the whole is emptied

    /****Section_Name**** Set*///Write the code as presented in: 3. std::set
  cout<<"\n\nSet section\n";
   { 
    set< int > iset;   // set of unique integer numbers
    iset.insert( 11 ); // populate set with some values
    iset.insert( -11 );
    iset.insert( 55 );                                      
    iset.insert( 22 );            
    iset.insert( 22 );
    if ( iset.find( 55 ) != iset.end() ) { // is value already stored?
        iset.insert( 55 );
    }                                             
    assert( iset.size() == 4 ); // sanity check :-)//list searches 4 of the list going from least to greatest value
    set< int >::iterator it1;                                  
    for ( it1 = iset.begin(); it1 != iset.end(); it1++ ) {
        cout << " " << *it1;                             //notice it doesn't print repeating values
    }

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structure
cout<<"\n\nPair structure section\n";
{
    pair< string, string > strstr;
    strstr.first = "Hello";              //paring hello and world to strstr
    strstr.second = "World";
    cout << strstr.first << " ";     
    cout << strstr.second << endl;

    pair< int, string > intstr;
    intstr.first = 1;
    intstr.second = "one";                   //pairing 1 and one to intstr
    cout << intstr.first << " ";             
    cout << intstr.second << endl;

    pair< string, int > strint( "two", 2 );
    assert( strint.first == "two" );           //checks for accuracy  and assigns first or second     
    assert( strint.second == 2 );           
    cout << strint.first << " ";       
    cout << strint.second << endl;
}
    /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert
    cout<<"\nMap insert section\n";
   {
typedef map<string, int>MapT;
typedef MapT::const_iterator MapIterT;
   MapT amap;
   pair<MapIterT, bool>result=
   amap.insert (make_pair("Fred",45)); //making a pair of fred and 45
   assert(result.second==true);         //if true then ==1              
   assert (result.first->second==45); //checks name first then checks that the second reulst is equal to 45 and return a true value(1)
    cout << "If both values matche the pair, then returns a true value of "<<result.second<<endl;

   result=amap.insert(make_pair("Fred",54));
   
   assert(result.second==false);
   assert(result.first->second==45);                //check and tells if it does not match the pair
    cout << "If both value DO NOT match pair, then returns a false value of "<<result.second<<endl;
}
    /****Section_Name****Map_Summary*///16. Map summary
   cout<<"\nMap summary\n";
    {
    map< string, string > phone_book;
    phone_book[ "411" ] = "Directory";           //stores 411 for Directory
    phone_book[ "911" ] = "Emergency";            ///stores 911 for emergency
    phone_book[ "508-678-2811" ] = "BCC";           //stores phone# to BCC
    if ( phone_book.find( "411" ) != phone_book.end() ) {    //searhc for the list
        phone_book.insert(
            make_pair(
                string( "411" ),
                string( "Directory" )                 //pairs firsand second list
            )
        );
    }
    assert( phone_book.size() == 3 );
    map< string, string >::iterator it2;
    for ( it2 = phone_book.begin(); it2 != phone_book.end(); ++it2 ) { //goes through list
        cout
            << " " << it2->first          //print first column followed by second column
            << " " << it2->second
            << endl
            ;
    }
    /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example
cout<<"\nSort algorithm";
    //int arr[ 100 ]; //creates array of 100 integers
    //sort( arr, arr + 100 );         //sort through 100 of them
    //vector v1;                             
   // sort( v1.begin(), v1.end() );        //sort from beggining to end
    /****Section_Name****Predicate_Algorithm */
    
    //Write the code as presented in: 25. count_if and predicate function
cout<<"\nSort predicate";
   // bool less_than_7( int value )        looking for values less than 7         
    //{                                                    
     //   return value < 7;     
   // }

   // vector< int > v1;
    //int count_less = std::count_if( v1.begin(), v1.end(), less_than_7 );    //counts from v1, and only count if it's less than 7
    //Write comments that help one better understand what the code is doing. 
 
 return 0;
 }}}