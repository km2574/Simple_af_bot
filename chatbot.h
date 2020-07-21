#include <iostream>
#include <string>
#include <sstream>
#include <vector>


using namespace std;

int test_res;string reply;

class Chatbot{
	public:
		string name;
		string get_reply();
		string get_name();
		void tell(string input);
		Chatbot(char const* myname);

};


Chatbot:: Chatbot(char const* myname){
	name = myname;

}


string Chatbot:: get_name(){
	return name;
}

string Chatbot:: get_reply(){

	if(test_res==0 || test_res>= 40 ){
		return "My apologies, I don't understand ";

	}
	else if(test_res == 31){

		return "Opps! I don't think I can answer that. Try agai! ";
	}
	else if(test_res == 32){

		return "Why do you think that, like you said :" + reply;
	}
	else if(test_res == 33){

		return "Sorry! I didn't wanted to hurt you.";
	}
	else if(test_res == 33){

		return "I feel happy to see smile on your face.";
	}
	else if(test_res >= 0 && test_res <= 4){

		return "Can you explain more. ";
	}
	else if(test_res > 4 && test_res <= 12){

		return "I love Playing with numbers. ";
	}
	else if(test_res > 12 && test_res <= 18){

		return "What is your favourite PRIME number? ";
	}
	else if(test_res > 18 && test_res <= 23){

		return "What is your favourite PRIME number? ";
	}
	else if (test_res > 23 && test_res <= 30)
	{
		return "My favourite number is 10. Not 10 but 2, remember I just understand binary :-) ";
	}
	else{

		return "My favourite number is " + to_string(rand());
	}

}

void Chatbot::tell(string input){

	string test = input;

	reply = input;

	// Vector of string to save tokens 
    vector <string> tokens; 
      
    // stringstream class check1 
    stringstream check1(input); 
      
    string intermediate; 
      
    // Tokenizing w.r.t. space ' ' 
    while(getline(check1, intermediate, ' ')) 
    { 
        tokens.push_back(intermediate); 
    } 
    test_res = input.length();
	for(int i = 0; i < tokens.size(); i++) {
        if (tokens[i]=="what"||tokens[i]=="How"||tokens[i]=="Whom"||tokens[i]=="whose"||tokens[i]=="why")
        {
        	test_res = 31;
        }
        else if(tokens[i]=="I"||tokens[i]=="am"||tokens[i]=="i")
        {
        	test_res = 32;
        }
        else if(tokens[i]=="sorry"||tokens[i]=="bad"||tokens[i]=="sad" || tokens[i]=="upset"||tokens[i]=="pain"||tokens[i]=="guilty")
        {
        	test_res = 33;
        }
        else if(tokens[i]=="happy"||tokens[i]=="cheerful"||tokens[i]=="great"|| tokens[i]=="delighted"||tokens[i]=="pleased"||tokens[i]=="awesome")
        {
        	test_res = 34;
        }
    }
}