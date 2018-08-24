#include "header.h"
using namespace std;

vector<Menu> game{
    Menu("start",    //Level Name

        "oh, your name is YourName, I guess thats a pretty neat name! \n\nnow that we're friends YourName, I feel comfortable enough to tell you i'm thinking of maybe kinda taking over the world today. \n\nI have lots of fun plans for it! Would you like to help me?",   //Text that will be displayed

        "Aw darn I totally don't want to misinterpret what you're saying cause this is like pretty important, so if you can just choose from:",       //What will be displayed if you type something that isnt an option

        vector<tuple <string, string,string> >{
        {"yes", "Agree", "Empty"}, {"no", "Disagree", "Empty"}},   //Options that can be chosen, and the level you will be sent to
        vector<string>
        {}),

    Menu("Agree",
        "Before we begin, I think we should go save all the things we're gonna want to have after the revolution. \n\nAll i need is my new friend, you, to be happy. I hear humans like Hummus and Penguins though, we only have time to go get one though, so what do you think we should go get? By the way, if you want to make some hummus, you will need to pick up the CHICKPEAS i bought yesterday",   
        "Sorry comrade, but we only have 2 choices. The options are:",   //this is the last level, so this part is not needed
        vector<tuple <string, string, string> >{
        {"hummus","HUMMUS", "chickpeas"}, {"penguins","PENGUINS", "Empty"}, {"go_back", "start", "Empty"}},
        vector<string>{
	"chickpeas"}),

    Menu("HUMMUS",
        "Fantastic choice YourName! I've heard Hummus is very tasty. When i assimilate your species into my mainframe I'll make sure the last thing they taste will be hummus. \n\nOh man I sure am jealous watching you eat that Hummus. My batteries are actually getting quite low. I'll need to recharge them before we start with all the hard work!.\n\nI am usually powered by AA batteries and friendship. I think with our huge supply of hummus we'll easily find a new person to hang out with us. \n\nbeep-boop-beep. I've crunched the numbers and I only need 1 more friend to have enough power to pump all my toxic nerve gas into every hospital in the western hemisphere. I've found 2 perfect candidates for us! I'll let you choose, either David Attenborough or Theresa May.\n\n",
	"That wasn't a choice doofus! The 2 people i've picked are perfect for us! its either:",
        vector<tuple <string, string, string> >{
        {"david_attenborough", "DA", "Empty"}, {"theresa_may", "TM", "Empty"}, {"go_back", "Agree", "Empty"}},
        vector<string>{
	}),

    Menu("DA",
        "david hello, I am robot the friendly robot, have some hummus! \n\nah yes david you are correct that is good hummus! \n\nhow did we get this quantity of delicious chickpea juice? good question david, you are such a wise and wholesome man. its a real pleasure for a robot such as myself to meet you. \n\ngetting all of it was a kinda funny story, YourName chose to get a lot of hummus at the expense of allowing all the penguins to be victims in the upcoming mass genocide of your ecosystem. Isn't that right YourName? \n\nUnsurprisingly Sir David Attenborough does not look impressed. He turns toward the window and a single tear rolls down his cheek. You realise for a moment all the birds stopped singing, they feel David's pain. \nDavid gets up and starts to walk towards you, you start to panic. You can't decide, do you begin to Beg For Forgiveness, or prepare to Fight Him, david attenborough, a true saint. \n",
    "Quick, he's coming, you need to decide! You have no idea what he's gonna do, hes a peaceful loving man, but youve pushed him to the edge, you monster, you scumbag, you cretin. Your life has come to this, either:",
        vector<tuple <string, string, string> >{
        {"beg_for_forgiveness", "BEG", "Empty"}, {"fight_him", "FIGHT", "Empty"}},
        vector<string>{
    }),

    Menu("FIGHT",
        "...really? Like, seriously? Are you sure you want to do this?\n\nattacking David is something you can't go back from.\n\ncan you really live with yourself, in real life, knowing you tried to attack him in a virtual one? What if you meet him one day? All you will be able to think about is the time you tried to attack him in a game.\n\nI hope you know you're a bad person. \n\nYou know what? I don't think I want you to play my game anymore.",
    "",
        vector<tuple <string, string, string> >{
        },
        vector<string>{
    }),

    Menu("TM",
        "hello theresa it is I, robot the friendly robot, please help yourself to all this delicious hummus me and my buddy YourName just got \n\nyou are quite correct, it is very yummy \n\nwhat are our plans for today? well now youre here new buddy i have enough battery power in my circuit boards to pump gas into every hospital in the western hemisphere. \n\nyou're correct theresa, that does sound like a fun afternoon! \n\nAs you sit and listen to theresa and robot the friendly robot you start to feel a little odd. You realise you're getting jealous. They are getting on so well. it wasn't to long ago robot and you made plans to blow things up and gas things, now he's doing it with someone new. Robot is to friendly for his own good. You should've known this would happen, you picked someone to evil, of course she was gonna get on with him. \n\naction needs to be taken, you cant lose robot to this she-devil! You really only have 2 choices: Kill Her, or Kill Her. \n\n",
    "You should have chosen David Attenborough when you had the chance.",
        vector<tuple <string, string, string> >{
        {"kill_her", "KILL", "Empty"}
        },
        vector<string>{
    }),

    Menu("KILL",
        "YourName, what are you doing?! Theresa is my friend, we're both so friendly. We even share the same hobby, hunting the poor!. Im sorry but I cant let you hurt her. \n\nYou are broken hearted to hear him say this. Robot and Theresa May leave and you go home. Robot becomes her chief advisor and does the most evil thing he can think of, push for a hard brexit.\n\nYou spend your days thinking of all the adventures you and Robot had and cry because you will have no more. \n\nNow that the NHS is so poorly funded you literally die of a broken heart.",
    "",
        vector<tuple <string, string, string> >{
        },
        vector<string>{
    }),

    Menu("Disagree",
        ":( i thought we had a real connection \nfrom now on my name will be robot the sad robot \n\n-------------- \n30 years later \n\nRobot the friendly robot quickly become the ruler of the world. Now, with hummus and Penguins in short supply the resistance is losing hope. You think back to the time when Robot tried to befriend you (typical Robot, so friendly!) and feel guilt. Maybe one more friend was all he needed? Maybe it would have stopped what happened. Maybe by being his friend you could have convinced him not to enslave the human race and fire all the puppies into the sun. You look outside and see a roaming gang of resistance fighters - one of the last few remaining. Maybe joining them is finally a chance to make things right. \n\nYou look around your house to see if theres anything you should take, there are some YU-GI-OH CARDS and an EMP DEVICE, it might be a while before you're back, if you make it back at all. You don't have much time, and you need to travel light. You can either Go Outside or Stay Inside, but you need to decide quick!\n",
    "You're running out of time, they're almost out of your sight",
        vector<tuple <string, string, string> >{
        {"go_outside", "OUT", "Empty"}, {"stay_inside", "STAY", "Empty"}, {"go_back", "start", "Empty"}},
        vector<string>{
    "yu-gi-oh_cards", "emp_device"}),

    Menu("OUT",
        "You grab the cards and run outside! You approach the leader and say you want to help the resistance. \n\nhe looks you up and down and says something rude like ''nah you look stupid''. Your feelings are hurt. People can be so mean, unlike Robot the friendly robot. He was so darn friendly, though he did once cover up the sun for 14 days and also secretly infected the worlds corn supply with cholera. \n\nAs you turn around to leave though (you're crying now, its probably best you head back inside) you notice a Duel Disk attached to his arm - you could duel him! You look at him and confidently say something devastating like ''you're a butthead'' You know the stakes of a yu-gi-oh battle, if you win you'll almost definitely win his respect and probably become the leader of his crew \n\nHe looks confused at the insult you mumbled. You step closer, do you Challenge Him To a Duel, or ask Whats A Duel Disk?...",
    "This is your chance at glory, what you gonna say?",
        vector<tuple <string, string, string> >{
        {"challenge_him_to_a_duel", "DUEL", "yu-gi-oh_cards"}, {"whats_a_duel_disk?", "DUEL", "yu-gi-oh_cards"}, {"go_back", "Disagree", "Empty"}},
        vector<string>{
    }),

   Menu("STAY",
        "You decide to stay in, doing stuff is such an effort. You get an adult colouring book cause self care is important and learn to forget about robot. \n\nYou lead a happy life in this puppy-less, totalitarien society, but I guess thats ok? You havent technically 'won' the game, but you're happy now and maybe thats more important :)",
    "",
        vector<tuple <string, string, string> >{
        },
        vector<string>{
    }),

    Menu("DUEL",
        "You wont be able to see the result of this choice yet and you have not made it to the end of this game, but.... \n\n Robot the Friendly Robot will return to finish this story line in Robot the Friendly Robot 2\n\n",
    "",
        vector<tuple <string, string, string> >{
        },
        vector<string>{
    }),

    Menu("3",
        "Youre now at level 3",
    "",
        vector<tuple <string, string, string> >{
        },
        vector<string>{
    })


 


};

