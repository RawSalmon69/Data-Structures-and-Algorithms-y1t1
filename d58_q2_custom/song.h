#ifndef __SONG_H__
#define __SONG_H__

#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include "priority_queue.h"

using namespace std;

class Song {
  public:
    std::string artist,title;
    int count;

    Song() { }
    Song(const Song &s) : artist(s.artist), title(s.title), count(s.count) { }
    Song(std::string artist,std::string title,int count) :  artist(artist), title(title), count(count) { }

    friend std::ostream& operator<<(std::ostream &out,const Song &s) {
      return out << "Artist: " << s.artist << " Title: " << s.title << " count: " << s.count;
    }

};
//  you have to write something below this line 
//  you *MIGHT* have to change the declaration of pq1 and pq2
class cmp1 {
  public:
    bool operator()(Song first, Song second){
      if(first.artist<second.artist) return false;
      if(first.artist>second.artist) return true;
      if(first.artist==second.artist){
        if(first.title<second.title) return false;
        if(first.title>second.title) return true;
      }
    }
};

class cmp2{
  public:
    bool operator()(Song first, Song second){
      if(first.count>second.count) return false;
      if(first.count<second.count) return true;
      if(first.count==second.count){
        if(first.artist<second.artist) return false;
        if(first.artist>second.artist) return true;
        if(first.artist==second.artist){
          if(first.title<second.title) return false;
          if(first.title>second.title) return true;
        }
      }
    }
};

CP::priority_queue<Song,cmp1> pq1;
CP::priority_queue<Song,cmp2> pq2;

#endif
