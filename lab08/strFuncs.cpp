#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;

bool isAnagram(string s1, string s2){
  std::transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	std::transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

	if(s1.length() != s2.length()) return false;
	for(int i = 0; i < s1.length(); i ++){
		for (int j = 0; j < s2.length(); j++){
			if(s1.at(i) == s2.at(j)){
				s2.erase(j, 1);
				break;
			}
			if(s2 == ""){
				return true;
			}
			if(j >= s2.length() - 1){
				return false;
			}
		}
	}
  return true;
}

bool isPalindrome(const string s1){
  if(s1.length() <= 1){
  		return true;
  	}
  	if(std::tolower(s1.at(0)) == std::tolower(s1.at(s1.length() - 1))){
  		return isPalindrome(s1.substr(1, s1.length() - 2));
  	}
  	else{
  		return false;
  	}

}
