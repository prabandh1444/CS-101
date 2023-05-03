#include <simplecpp>
#include "shooter.h"
#include "bubble.h"

/* Simulation Vars */
const double STEP_TIME = 0.02;

/* Game Vars */
const int PLAY_Y_HEIGHT = 450;
const int LEFT_MARGIN = 70;
const int TOP_MARGIN = 20;
const int BOTTOM_MARGIN = (PLAY_Y_HEIGHT+TOP_MARGIN);


void move_bullets(vector<Bullet> &bullets){
    // move all bullets
    for(unsigned int i=0; i<bullets.size(); i++){
        if(!bullets[i].nextStep(STEP_TIME)){
            bullets.erase(bullets.begin()+i);
        }
    }
}

 void move_bubbles(vector<Bubble> &bubbles){
    // move all bubbles
    for (unsigned int i=0; i < bubbles.size(); i++)
    {
        bubbles[i].nextStep(STEP_TIME);
    }

}


vector<Bubble> create_bubbles()
{
    // create initial bubbles in the game
    vector<Bubble> bubbles;
    bubbles.push_back(Bubble(WINDOW_X/2.0, BUBBLE_START_Y, BUBBLE_DEFAULT_RADIUS, -BUBBLE_DEFAULT_VX, BUBBLE_DEFAULT_VY, COLOR(255,105,180)));// regular bubbles
    bubbles.push_back(Bubble(WINDOW_X/4.0, BUBBLE_START_Y, BUBBLE_DEFAULT_RADIUS, BUBBLE_DEFAULT_VX, BUBBLE_DEFAULT_VY, COLOR(255,105,180)));
    bubbles.push_back(Bubble(3*WINDOW_X/4.0, BUBBLE_START_Y, 2*BUBBLE_DEFAULT_RADIUS, 2*BUBBLE_DEFAULT_VX, 2*BUBBLE_DEFAULT_VY, COLOR(128,0,128)));// Mega_bubble moves twice as fast
    return bubbles;
}


int main()
{
    initCanvas("Bubble Trouble", WINDOW_X, WINDOW_Y);

    Line b1(0, PLAY_Y_HEIGHT, WINDOW_X, PLAY_Y_HEIGHT);
    b1.setColor(COLOR(0, 0, 255));

    string msg_cmd("Cmd: _");
    Text charPressed(LEFT_MARGIN, BOTTOM_MARGIN, msg_cmd);

    // Intialize the shooter
    Shooter shooter(SHOOTER_START_X, SHOOTER_START_Y, SHOOTER_VX);

    // Initialize the bubbles
    vector<Bubble> bubbles = create_bubbles();

    // Initialize the bullets (empty)
    vector<Bullet> bullets;

    int BUBBLES_DESTROYED=0,health=3,time=1;
        Text h(430,470,"Health :");
        Text s(430,20,"score :");
        Text t(70,20,"time :           / 50");


       XEvent event;
        Text h0(450,470,health);
        Text s0(450,20,BUBBLES_DESTROYED);
        Text t0(90,20,time/10);
    // Main game loop
    while (true)
    {
        bool pendingEvent = checkEvent(event);
        if (pendingEvent)
        {
            // Get the key pressed
            char c = charFromEvent(event);
            msg_cmd[msg_cmd.length() - 1] = c;
            charPressed.setMessage(msg_cmd);

            // Update the shooter
            if(c == 'a')
                shooter.move(STEP_TIME, true);
            else if(c == 'd')
                shooter.move(STEP_TIME, false);
            else if(c == 'w')
                bullets.push_back(shooter.shoot());
            else if(c == 'q')
                return 0;
        }

        // Update the bubbles
        move_bubbles(bubbles);

        // Update the bullets
        move_bullets(bullets);
        // destroying bubbles as they get hit
        bool Mega_bubble_burst=false;double baby_x,baby_y;// x and y coordinates when magabubble breaks and forma baby bubbles
        for(unsigned int i=0; i<bubbles.size(); i++){
        for(unsigned int j=0; j<bullets.size(); j++)
        {if(abs(bullets[j].get_center_x()-bubbles[i].get_center_x())<(10+bubbles[i].get_radius())&&bullets[j].get_center_y()-bubbles[i].get_center_y()<(10+bubbles[i].get_radius()))
            {if(bubbles[i].get_radius()==10)                          // these are the touching conditions for bullet and bubble
           {         BUBBLES_DESTROYED++;
                     bubbles.erase(bubbles.begin()+i);
                     bullets.erase(bullets.begin()+j);
                     Mega_bubble_burst=false;
                     break;}
              if(bubbles[i].get_radius()==20){
                     baby_x=bubbles[i].get_center_x();baby_y=bubbles[i].get_center_y();
                     BUBBLES_DESTROYED++;
                     bubbles.erase(bubbles.begin()+i);
                     bullets.erase(bullets.begin()+j);
                     Mega_bubble_burst=true;
                     break;}}}}


                    if(Mega_bubble_burst)// new bubbles are created when megabubble is destroyed
                     {bubbles.push_back(Bubble(baby_x+20,baby_y, BUBBLE_DEFAULT_RADIUS, -BUBBLE_DEFAULT_VX, BUBBLE_DEFAULT_VY, COLOR(255,105,180)));
                     bubbles.push_back(Bubble(baby_x-20,baby_y, BUBBLE_DEFAULT_RADIUS, BUBBLE_DEFAULT_VX, BUBBLE_DEFAULT_VY, COLOR(255,105,180)));}
       {wait(STEP_TIME);time++;t0.reset(90,20,time/10);
       s0.reset(450,20,BUBBLES_DESTROYED);
        // game oven when shooter touches buble three times
        for(unsigned int j=0; j<bubbles.size(); j++){
        if(abs(bubbles[j].get_center_x()-shooter.get_body_center_x())<18&&shooter.get_head_center_y()-bubbles[j].get_center_y()<18){
        health--;shooter.reintialize();}}// bringing shooter to center after is looses life
        h0.reset(470,470,health);
        if(health==0){Text LOST(250,250,"GAME OVER");wait(10);break;}// try again next time
        if(BUBBLES_DESTROYED == 5){Text WON(250,250,"CONGRATULATIONS");wait(10);break;}// game is cleared
        if(time==500){Text TIME(250,250,"TIME EXPIRED");wait(10);break;}
    }

}}




