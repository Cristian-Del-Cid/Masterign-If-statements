/*Cristian Del Cid
2/03/2026
This program is from Chapter 4, section 4.5, 4.6 and 4.7. It teaches how to
Write C programs by using 
- - -If statement
- - -If -else statement
- - -If -else if -else statements.
*/

//Part I


#include <iostream> //library package
using namespace std;

int main() //function to start execution
{
	int grade; //for holding student's grade

	double wavelength;

	cout << "*****Part I*****" << endl;

	cout<<"*****This is a grade processing program*****\n"<<endl; //printing program

	cout << "Please enter the student's grade: \n" << endl; //prompting user

	cin>>grade; //reading user input
	
	//Dertemine passing or not
	if (grade >= 60)
	    cout << grade <<" is passing a grade.\n" <<endl; 

    else 
	    cout << grade << " is not a passing grade." <<endl;

		//Determine lette grade
		if (grade >= 90)
		   cout << grade << " is a letter grade A." << endl;
		else if (grade >= 80)
		   cout << grade << " is a letter B." << endl;
		else if (grade >= 70)
		   cout << grade << " is a letter C." << endl;
		else if (grade >= 60)
		  cout << grade << " is a letter D." << endl;
		  else 
		  cout << grade << " is a letter F." << endl; 

		  



//Part II 



	cout << "\n***** Part II*****" << endl; 

	cout << "\n*****Visible light spectrum identifier*****" <<endl; //printing program
	
	cout << "please enter the wavelength in nanometers" <<endl; //prompting user 
	cin >> wavelength; 

	// Determine the color belonged to the wavelength

	if (wavelength < 380 )
        cout << wavelength << " Ultraviolet " << endl; 
	else if (wavelength >=380 && wavelength <=450) 
	    cout << wavelength << " violet " << endl;
	else if (wavelength >=451 && wavelength <=495)
	    cout << wavelength << " Blue " << endl;
	else if (wavelength >=496 && wavelength <=570)
	    cout << wavelength << " Green " << endl;
	else if (wavelength >= 571 && wavelength <= 590)
	    cout << wavelength << " Yellow " << endl;
	else if (wavelength >= 591 && wavelength <= 620)
	    cout << wavelength << " Orange " << endl;
	else if (wavelength >= 621 && wavelength <= 750)
	    cout << wavelength << " Red " << endl;
		else 
		cout << wavelength << " Infrared " << endl;
	
	
	
	
	return 0; //indication of succesful ending to OS 
		
}