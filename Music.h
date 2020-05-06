
#ifndef Music_h
#define Music_h

class Music {
    private:
        char *track,*artist,*length, *position;
        int progressBar;
        bool playing;
    public: 
        Music(char* t, char* a, char* l, char* po, bool pl, int p): track(t), artist(a), length(l), position(po), playing(pl), progressBar(p){};
        ~Music(){};
        char* getLength(){return length;}
        size_t getLengthS(){return sizeof(length);}
        char* getPosition(){return position;}
        size_t getPositionS(){return sizeof(position);}
        char* getArtist(){return artist;}
        size_t getArtistS(){return sizeof(artist);}
        char* getTrack(){return track;}
        size_t getTrackS(){return sizeof(track);}
        bool getPlaying(){return playing;}
        int getProgressBar(){return progressBar;}
        void setLength(char * l){length = l;}
        void setPosition(char *p){position = p;}
        void setArtist(char *a){artist = a;}
        void setTrack(char *t){track = t;}
        void setPlaying(bool p){playing = p;}
        void setProgressBar(int p){progressBar = p;}
        
};

#endif