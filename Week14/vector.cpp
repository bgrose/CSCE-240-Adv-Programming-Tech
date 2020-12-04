#include <cstdlib>
#include <iostream>
#include <vector>


using namespace std;
/*
 * 
 */
 
//~ void printVect(vector<int>);

int main(int argc, char** argv) 
{
	//initialization
	
	//vector<type> name;
	
	vector<int> vect{1,2,3,4,5}; 
	
	vector<int> vect1(vect.begin()+2, vect.end());
	
	for(int i : vect1){
		cout << i << " "; 
	}
	cout << endl;
	
	//cout << vect << endl;
	
	//~ int arr[5] = ...
	//~ for
	   //~ *(arr + i)
	
	
	
	
	//~ vect1 = vect;
	 //~ int arr[5] = {1,2,3,4,5};
	 //~ vector<int> vect3(arr, arr+5);
	 //~ for(int i : vect3){
		//~ cout << i << " "; 
	//~ }
	//~ cout << endl;
	//~ vector<int> vect2(5, 10); 
	
	//~ //.size()
	//~ cout << vect.size() << endl;
	
	//~ //Printing element: reg for, foreach
	//~ /*
	//~ for(int i = 0; i < vect.size(); i++)
	//~ {
		//~ cout << vect[i] << " "; 
	//~ }
	//~ cout << endl;
	//~ */
	//~ //for each
	//~ /*
	//~ for(int i : vect) 
	//~ {
		//~ cout << i << " "; 
	//~ }
	//~ cout << endl;
	//~ */
	//~ //we are going to need to print a lot so lets make a function. 
	//~ printVect(vect);
	
	//~ //Accessing elements [], .front(), .back()
	//~ //cout << vect[0] << endl;
	//~ //cout << vect.front() << endl;
	
	
	//~ //Adding elements to the end push_back()
	vect.push_back(100);
	//~ printVect(vect);
	 
	//~ //Deleting elements from end pop_back()
	//~ vect.pop_back();
	//~ printVect(vect);
	
	//iterators (for loop)
	//vector<int>::iterator it or auto  
	//vect.begin()
	//vect.end()
	
	//cout << vect.begin() << endl;
	for(auto i = vect.begin(); i != vect.end(); i++)
	{
		cout << *i << " "; 
	}
	cout << endl;
	
	vect.insert(vect.begin()+4, 100);
	//~ //cout << vect.begin() << endl;
	for(vector<int>::iterator i = vect.begin(); i != vect.end(); i++)
	{
		cout << *i << " "; 
	}
	cout << endl;
	
	
	for(auto i = vect.begin(); i != vect.end(); i++)
    {
	    cout << *i << " ";
    }
	cout << endl;
	
	//~ */
	//~ //inserting elements insert(iterator+offset, value)
	//~ vect.insert(vect.begin(), 100);
	//~ printVect(vect);
	//~ vect.insert(vect.begin()+3, 99);
	//~ printVect(vect);

	//~ //inserting elements erase(iterator+offset); 
	//~ vect.erase(vect.begin());
	//~ printVect(vect);
	
	//~ vect.erase(vect.begin()+2);
	//~ printVect(vect);
	
	//~ //2d vector
	
	//~ vector<vector<int>> v2d{ { 1, 2, 3 }, 
                             //~ { 4, 5, 6 } }; 
                               
    //~ for(int i = 0; i < v2d.size(); i++) 
    //~ { 
        //~ for(int j = 0; j < v2d[i].size(); j++) 
        //~ {
            //~ cout << v2d[i][j] << " "; 
		//~ }
        //~ cout << endl; 
    //~ } 
    
    
    //~ vector<vector<String>> v2d{ { 1, 2, 3 }, 
                             //~ { 4, 5, 6 } }; 
    //~ for(vector<String> v : v2d)
    //~ {
		//~ for(String i : v)
		//~ {
			//~ cout << i[1] << " "; 
			//~ //i = 10; 
		//~ }
		//~ cout << endl;
	//~ }
	
	
    return 0;
}



//~ void printVect(vector<int> v)
//~ {
	//~ for(int i : v)
	//~ {
		//~ cout << i << " "; 
	//~ }
	//~ cout << endl;
//~ }





