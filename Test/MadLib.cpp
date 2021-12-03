#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{
	string noun1;
	string famous_person1;
	string mythical_creature;
	string noun2;
	string verb1;
	string verb2ED;
	string famous_person2;
	string verb3ED;
	string adjective;
	string noun_plural;
	string famous_person3;
	string occupation;
	string adjective2;
	string adverbLY;
	string material;
	string occupation2;
	string adjective3;

	cout << "Noun: " << std::endl;
	cin >> noun1;

	cout << "Famous Person: " << std::endl;
	cin >> famous_person1;

	cout << "Mythical Creature: " << std::endl;
	cin >> mythical_creature;

	cout << "Noun: " << std::endl;
	cin >> noun2;

	cout << "Verb: " << std::endl;
	cin >> verb1;
	
	cout << "Verb ending with ED: " << std::endl;
	cin >> verb2ED;

	cout << "Famous Person: " << std::endl;
	cin >> famous_person2;

	cout << "Verb ending with ED: " << std::endl;
	cin >> verb3ED;

	cout << "Adjective: " << std::endl;
	cin >> adjective;

	cout << "Noun (plural): " << std::endl;
	cin >> noun_plural;

	cout << "Famous Person: " << std::endl;
	cin >> famous_person3;

	cout << "Occupation: " << std::endl;
	cin >> occupation;

	cout << "Adjective: " << std::endl;
	cin >> adjective2;

	cout << "Adverb ending in LY: " << std::endl;
	cin >> adverbLY;

	cout << "Type of Material: " << std::endl;
	cin >> material;

	cout << "Occupation: " << std::endl;
	cin >> occupation2;

	cout << "Adjective: " << std::endl;
	cin >> adjective3;

	cout << "In his second term at Hogwarts School of " << noun1 << " and Wizardry, Harry Potter (" << famous_person1 << ") is warned by a/an " << mythical_creature << " named Dobby that " << noun2 << " will " << verb1 << " when he returns to Hogwarts. Besides that fact that he is still " << verb2ED << " by Professor Snape (" << famous_person2 << ") and " << verb3ED << " by Draco Malfoy (" << famous_person3 << "). Also, famous " << occupation << " Gilderoy Lockhart (Kenneth Branagh) has joined the Hogwarts staff and is the new Defense Against the " << adjective << " Arts teacher. But who is the one doing it? Malfoy? " << occupation2 << " Hagrid (Robbie Coltrane)? or even Harry? But what if it's Lord Voldemort trying to make is " << adjective3 << " return?";
	
}