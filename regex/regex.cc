#include<iostream>
#include<string>
#include<regex>
using namespace std;

void printMatches(string str, regex reg)
{
    smatch result; // When we want to search string & store result use smatch
    while(regex_search(str, result, reg)){
        cout << str << endl;
        cout << "Is there a match " << result.ready() << endl;
	cout << "Are there no matches " << result.empty() << endl;
	cout << "Number of matches " << result.size() << endl;
	cout << result.str(1) << endl;
	str = result.suffix().str(); // Remove match found and add remaining string after match
    }
}

void printMatches2(string str, regex reg)
{
    sregex_iterator currentMatches(str.begin(), str.end(), reg);
    sregex_iterator lastMatch;
    while (currentMatches != lastMatch){
        smatch m = *currentMatches;
        cout  << m.str() << endl;
	currentMatches++;
    }
}
main()
{
    //string s = "The ape was at apex";
    //regex reg ("(ape[^ ]?)");
    //printMatches(s, reg);
    //string s1 = "I picked the pickle";
    //regex reg1("(pick[^ ]+)");
    //printMatches2(s1, reg1);
    //string s2 = "Cat rat mat fat";
    //regex reg2("([crmf])at");
    //regex reg3("[Cr]at");
    //regex reg4("[C-Fc-f]at");
    //regex reg5("[^cr]at");
    //printMatches2(s2, reg2);
    //printMatches2(s2, reg3);
    //printMatches2(s2, reg4);
    //printMatches2(s2, reg5);
    //string owlfood = regex_replace(s2, reg3, "Owl");
    //cout << owlfood << endl;
    string email = "manish@gmail.com  @gmail.com  abc@gmail.com";
    regex email_pattern("([\\w]+)@([\\w]+).com");
    printMatches2(email, email_pattern);
    string mobile_num = "12345678 2233445566";
    regex mobile_pattern("[\\d]{10}");
    printMatches2(mobile_num, mobile_pattern);
}
