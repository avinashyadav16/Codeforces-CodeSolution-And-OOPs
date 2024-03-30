/**
 *  @file: Lecture_37.cpp
 *  @author: Avinash Yadav
 *  @brief: Virtual Functions Example + Creation Rules in C++
 *  @date: 21-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
NOTES:
    Rules for virtual functions
        - They cannot be static.
        - They are accessed by object pointers.
        - Virtual functions can be a friend of another class.
        - A virtual function in the base class might not be used.
        - If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class.
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
    virtual void display() {}
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