#ifndef ANACONDA_H
#define ANACONDA_H

#include <vector>


class AnacondaWindow
{
    private:
        int height;
        int width;
        string title;
        string IconPath;


    public:
        Anaconda(){
            SetWindowHeight(640);
            SetWindowWidth(480);
            SetWindowTitle("Anaconda Window");
        }
        ~Anaconda(){
            cout << "Object Is Destroyed";
        }
        void GetWindowHeight(){return height;}
        void GetWindowWidth(){return width;}
        void GetWindowTitle(){return title;}
        void GetWindowIcon(){return IconPath;}

        void SetWindowHeight(int Height){this->height = height;}
        void SetWindowWidth(int width){this->width = width;}
        void SetWindowTitle(string Title){this->title = title;}
        void SetWindowIcon(string IconPath){this->IconPath = IconPath;}


        void RenderWindow(int height, int width, string title){
            // Rendering Code
        }
        void RenderWindow(int height, int width){
            string newTitle = "Anaconda Window";
            RenderWindow(height, width, newTitle);
        }
        void Run(){
            // Running The Code
        }




};

class AnacondaScene(){
public:
    void Restart(){
        // Restart The Game
    }
    void LoadLevel(string LevelName){

    }
private:


};


class AnacondaSprite{
protected:
    string ImagePath;
public:
    AnacondaSprite(){

    }
    AnacondaSprite(string path){

    }
    void DrawImage(){
        // Drawing Image
    }
    void LookAtMouse(){
        // Look At  Mouse
    }

};
class Input(){
public:
    Input(){
        // Input Code
    }
    void GetAxis(string path){
        // get hoz or ver axis
        // return 1 or -1 based on it
    }


};
class Mouse(){

private:
    vector pos;

public:
    void MousePos(){
        // Return Mouse Position In Vector
    }
    void KeyDown(int index){
        // Return True If Pressed The Index
    }
    void GetKey(int index){
        // Return Key If Its Pressed
    }
    void KeyUp(int index){
        // return True If Gets Up
    }




};









#endif // ANACONDA_H
