#include <iostream>
#include <vector>
using namespace std;
int main()
{
   // vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
   // cout << vowels[0] << endl;

   // vector<int> test_score{100, 98, 89};
   // cout << test_score[0] << endl;
   // cout << test_score[1] << endl;
   // cout << test_score[2] << endl;

   // // vector using .at
   // cout << test_score.at(0) << endl;
   // cout << test_score.at(1) << endl;
   // cout << test_score.at(2) << endl;

   // cout << test_score.size() << endl; // it tells the size of the vectors.

   // cout << "enter 3 test_score" << endl;
   // cin >> test_score.at(0);
   // cin >> test_score.at(1);
   // cin >> test_score.at(2);
   // // updating the test_score.
   // cout << test_score.at(0) << endl;
   // cout << test_score.at(1) << endl;
   // cout << test_score.at(2) << endl;

   // cout << "enter the test score to add" << endl;

   // int score_to_add(0);
   // cin >> score_to_add;
   // test_score.push_back(score_to_add);
   // cout << "enter one more test score to add  to vector";

   // cin >> score_to_add;
   // test_score.push_back(score_to_add);
   // cout << "\ntest_score are now" << endl;

   // cout << test_score.at(0) << endl;
   // cout << test_score.at(1) << endl;
   // cout << test_score.at(2) << endl;
   // cout << test_score.at(3) << endl;
   // cout << test_score.at(4) << endl;
   // //    cout<<test_score.at(5)<<endl;    this will show exception which is : out of range.

   // cout << test_score.size() << endl; // it tells the size of the vectors.

   //    example of 2d vector

   vector<vector<int>> movie_rating
   {
       {2, 3, 5, 4},
       {5, 1, 2, 6},
       {5, 4, 2, 3}};

   cout << movie_rating[0][0] << endl;
   cout << movie_rating[0][1] << endl;
   cout << movie_rating[0][2] << endl;
   cout << movie_rating[0][3] << endl;
   // cout<<movie_rating[0][4]<<endl;
}