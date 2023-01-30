//Roan Morgan
//Do some cyphers (Rot13)
//11.9.22
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Rot13 {
private:
	string message;
	string encoded;
	string decoded;
public:
	void setMessage(string argMessage);
	string getMessage(void);
	void setEncoded(string argEncoded);
	string getEncoded(void);
	void setDecoded(string argDecoded);
	string getDecoded(string argDecoded);

	string encode(void);
	string decode(void);
};

int main(void) {
	
	//project description
	cout << "Lab 10b - Cipher Rot13" << endl << endl;

	Rot13 x;
	string y;

	cout << "Enter a millitary command: ";
	getline(cin, y);

	x.setMessage(y);

	for (int i = 0; i < x.getMessage().size(); i++) {
		cout << x.getMessage()[i] << " = " << int(x.getMessage()[i]) << endl;
	}

	for (int i = 0; i < x.getMessage().size(); i++) {
		cout << int(x.getMessage()[i] + 13) << " = " << char(int(x.getMessage()[i])) << endl;
	}

	x.encode();

	return(0);
}

void Rot13::setMessage(string argMessage){
	message = argMessage;
}

string Rot13::getMessage(void)
{
	return message;
}

void Rot13::setEncoded(string argEncoded)
{
	encoded = argEncoded;
}

string Rot13::getEncoded(void)
{
	return encoded;
}

void Rot13::setDecoded(string argDecoded)
{
	decoded = argDecoded;
}

string Rot13::getDecoded(string argDecoded)
{
	return decoded;
}

string Rot13::encode(void){

	encoded = message;

	int o = 0;

	for (int i = 0; i < encoded.size(); i++) {
		if (int(encoded[i] == 32)) {
			o = i;
			encoded[i] = encoded[i+1];
			o++;
			if (o < encoded.size()) {
				encoded[o] = encoded[o + 1];
			}
			
		}
	}

	cout << encoded << endl;

	return encoded;
}
