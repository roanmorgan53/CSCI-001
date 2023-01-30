//Roan Morgan
//Tweet Class
//11.14.22
#include <iostream>
#include <iomanip>
using namespace std;

class Tweet {
private:
	string author, body;
	int timeStamp;

public:
	Tweet();
	void display();
	string getAuthor();
	string getBody();
	int getTime();
	void setAuthor(string arg);
	void setBody(string arg);


	

};

int main(void) {
	
	//project description
	cout << "Twitter is dying, so lets make it ourself\n" << endl;

	Tweet myPost;

	myPost.display();


	return(0);
}

Tweet::Tweet(){
	body = "default message";
	author = "John Smith";
	timeStamp = time(0);
}

void Tweet::display()
{
	cout << "Tweet: " << body << endl;
	cout << "by: " << author << endl;
	cout << "at: " << timeStamp << endl;
}

string Tweet::getAuthor()
{
	return author;
}

string Tweet::getBody()
{
	return body;
}

int Tweet::getTime()
{
	return timeStamp;
}

void Tweet::setAuthor(string arg)
{
	author = arg;
}

void Tweet::setBody(string arg)
{
	body = arg;
}
