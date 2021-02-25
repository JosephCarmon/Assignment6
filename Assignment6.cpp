/*
 * Assignment6.cpp
 *
 *  Created on: Feb 24, 2021
 *      Author: Joe
 */

#include <map>
#include <iostream>

using namespace std;

int main()
{
//comment line 16 and uncomment 19 to reverse the sort order of the map

       map<string,int> siMapStudent;


//	map<string,int, std::greater<string>> siMapStudent;

       siMapStudent.insert(make_pair("John",1));
       siMapStudent.insert(make_pair("Beth",2));
       siMapStudent["Melissa"] = 4;

       map<string, int>::iterator siMapStudentIterator = siMapStudent.begin();
       cout << "entering first while loop" << endl;
    //   cout << " siMapStudent begin value " << siMapStudent.begin() << endl;
     //  cout << " siMapStudent end value " << siMapStudent.end() << endl;
       cout << siMapStudentIterator->first;

       while(siMapStudentIterator != siMapStudent.end())
       {
    	   cout << siMapStudentIterator->first <<" :: "<<siMapStudentIterator->second << endl;
    	   siMapStudentIterator++;

       }
       cout << "end of first while loop" << endl;

       if(siMapStudent.insert(make_pair("Beth", 7)).second ==false)
       {
    	   cout << "Element Beth is already entered into the map";
       }

       if(siMapStudent.find("Edward") != siMapStudent.end())
       {
    	   cout  << "Element Edward not found" << endl;
       }

       siMapStudentIterator = siMapStudent.find("Melissa");
       cout << siMapStudentIterator->second << endl;

       for(siMapStudentIterator = siMapStudent.begin(); siMapStudentIterator != siMapStudent.end(); siMapStudentIterator++)
       {
    	   cout << siMapStudentIterator->first << "  :: " << siMapStudentIterator->second << endl;
       }

       multimap<string, int> siMultiMapStudent;


       siMultiMapStudent.insert(make_pair("John", 1));
       siMultiMapStudent.insert(make_pair("Beth", 2));
       siMultiMapStudent.insert(make_pair("John", 17));

       multimap<string, int>::iterator siMultiMapStudentIterator = siMultiMapStudent.begin();
       while(siMultiMapStudentIterator != siMultiMapStudent.end())
       {
    	   cout << siMultiMapStudentIterator->first << " :: "<< siMultiMapStudentIterator->second << endl;
    	   siMultiMapStudentIterator++;
       }

       auto it = siMultiMapStudent.equal_range("John");

       for( auto itr = it.first; itr != it.second; itr++)
       {
    	   cout << itr->first << itr->second << endl;

       }

	    return 0;



}


