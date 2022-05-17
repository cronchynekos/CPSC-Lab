#include <string>
#include <fstream>
#include <iostream>
#include <unordered_map>
#include <sstream>//added header

using namespace std;

class UserLogin {
private:

    unordered_map< string, string > table;

public:
    UserLogin(); // default constructor

    void readIn(const string& filename); // add data from file to hash table

    size_t numberOfUsers(); // return the number of users

    string passWordCheck(const string& userName); // returns the passWord of the given user

    size_t wordBucketIdMethod1(const string& userName); // return the bucket number where the given user is located

    size_t wordBucketIdMethod2(const string& userName); // another way to find the bucket number where the given user is located

    bool validateUser(const string& userName); // look up given user

    bool authenticateUser(const string& userName, const string& passWord);// authenticate given user and password

};

UserLogin::UserLogin() {
}

void UserLogin::readIn(const string& filename) {
    ifstream temp;
    //string line
    temp.open(filename);
    if (!temp.is_open())
    {
        return;
    }
    //if (!line.is_open())
    //{
    //    return 0;
    //}
    string word;
    while (getline(temp, word))
    {
        stringstream ss(word);
        string user, pass;
        ss >> user >> pass;
        table[user] = pass;
    }
}//completed
size_t UserLogin::numberOfUsers() {
    return table.size();
}//completed
string UserLogin::passWordCheck(const string& userName) {
    return table.find(userName) != table.end() ? table[userName] : "Non-existent User";
    //return table.find(userName) != table.end() : "Non-existent User";
}//completed
size_t UserLogin::wordBucketIdMethod1(const string& userName) {
    return table.bucket(userName);
}//completed
size_t UserLogin::wordBucketIdMethod2(const string& userName) {
    unsigned n = table.bucket_count();
    for (unsigned i = 0; i < n; i++) {
        for (auto j = table.begin(i); j != table.end(i); ++j)
            if (j->first == userName)
                return i;
    }//10/14
}//completed
bool UserLogin::validateUser(const string& userName) {
    return table.find(userName) != table.end();
}//completed
bool UserLogin::authenticateUser(const string& userName, const string& passWord) {
    auto exists = table.find(userName) != table.end();
    if (exists)
        return (table.find(userName)->second == passWord);
    return false;
}//completed