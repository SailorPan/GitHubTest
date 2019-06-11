#include <iostream>
#include<boost/utility.hpp>
#include<boost/progress.hpp>
#include<boost/any.hpp>
#include<boost/scoped_ptr.hpp>
#include<boost/shared_ptr.hpp>
#include<boost/bind.hpp>
#include<vector>
#include<fstream>

using namespace std;

void add(int i, int j);
int main()
{
//    vector<string> str_vec(20);
//    ofstream fs("test");
//    boost::progress_display pd(str_vec.size());
//    vector<string>::iterator it = str_vec.begin();
//    for(;it != str_vec.end(); ++it)
//    {
//        fs << *it <<endl;
//        ++pd;
//        sleep(1);
//    }
//    myclass c1();
//    myclass c2(1);
//    c2.pringMessage();
//    HelloWorld hw;
//    string name = "kllop";
//    hw.setName(name);
//    int age = 12;
//    hw.setAge(age);
//    hw.print();
//    vector<boost::any> vec_any;
//    vec_any.push_back(1);
//    vec_any.push_back(string("Hello World"));
//    for(size_t i = 0; i < vec_any.size(); ++i)
//    {
//        cout<<vec_any[i].type().name()<<endl;
//        try
//        {
//            int result = boost::any_cast<int>(vec_any[i]);
//            cout << result << endl;
//        }
//        catch(boost::bad_any_cast & e)
//        {
//            cout << "cast error: " << e.what() << endl;
//        }
//    }
//    boost::scoped_ptr<int> i(new int);
//    *i = 1;
//    *i.get() = 2;
//    i.reset(new int);
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for_each(v.begin(), v.end(), boost::bind(add, 10, _1));

    return 0;
}

void add(int i, int j)
{
  std::cout << i + j << std::endl;
}


