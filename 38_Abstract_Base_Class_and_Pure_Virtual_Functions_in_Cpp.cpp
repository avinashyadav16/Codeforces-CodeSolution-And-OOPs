/**
 *  @file: Lecture_38.cpp
 *  @author: Avinash Yadav
 *  @brief: Abstract Base Class & Pure Virtual Functions in C++
 *  @date: 21-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

class WEBSITE
{
protected:
    string title;
    float rating;

public:
    WEBSITE(string s, float r)
    {
        title = s;
        rating = r;
    }

    // This ensures that all the derived class has the defination of this function
    // No such derived class can exist without this defination.
    virtual void display() = 0; // Do-Nothing Function --> Pure Virtual Function
    // This function will not run itself.
    // It says just over-write me in the derived class
};

class WEBSITE_VIDEO : public WEBSITE
{
private:
    float videoLength;

public:
    WEBSITE_VIDEO(string s, float r, float vl) : WEBSITE(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << endl;
        cout << "Website Video Title: " << title << endl;
        cout << "Ratings: " << rating << " Out of 5 Stars" << endl;
        cout << "Length of Website Video: " << videoLength << " Minutes" << endl;
    }
};

class WEBSITE_TEXT : public WEBSITE
{
private:
    int words;

public:
    WEBSITE_TEXT(string s, float r, int wc) : WEBSITE(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << endl;
        cout << "Website Text Title: " << title << endl;
        cout << "Rating: " << rating << " Out of 5 Stars" << endl;
        cout << "Number of Words in the Website: " << words << " Words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for website Video
    title = "Django Documentation Video";
    vlen = 4.56;
    rating = 4.89;
    WEBSITE_VIDEO webVideo(title, rating, vlen);

    // for website Text
    title = "Django Documentation Text";
    words = 433;
    rating = 4.19;
    WEBSITE_TEXT webText(title, rating, words);

    WEBSITE *web[2];
    web[0] = &webVideo;
    web[0]->display();

    web[1] = &webText;
    web[1]->display();

    return 0;
}