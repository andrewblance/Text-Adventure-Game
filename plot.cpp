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
        {"beg_for_forgiveness", "BEG", "Empty"}, {"fight_him", "FIGHT", "Empty"}, {"go_back", "HUMMUS", "Empty"}},
        vector<string>{
    }),

    Menu("BEG",
        "You try to beg for forgive, really grovel, but its to late. David lets out a long sigh. He's not angry, just disapointed. A butterfly comes through the window and lands on his shoulder. He doesnt say anything but you can tell a vital piece of information has been communicated as the butterly takes off and flies away. \n\nI guess its time, david says, the world no longer has a place for me in it. What can I do against such terrible destruction? I thought I had given enough to humanity to make them see the wonders of our planet and the love mother gaia shares with us everyday. I know now, because of you, I was wrong, I can never do enough...\n\nDavid gets on his knees and closes his eyes for the last time. You did this, you killed him, not with your words or fists but with your actions. You know this and though you dont physically die you do emotionally. \n\nI hope youre happy.",
    "",
        vector<tuple <string, string, string> >{
        },
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
        {"kill_her", "KILL", "Empty"}, {"go_back", "HUMMUS", "Empty"}
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
        "You wont be able to see the result of this choice yet and you have not made it to the end of this game, but.... \n\n Robot the Friendly Robot will return to finish this story line in Robot the Friendly Robot 2\n",
    "",
        vector<tuple <string, string, string> >{
        },
        vector<string>{
    }),

    Menu("PENGUINS",
        "sweet choice YourName! Penguins are fun, smart looking creatures. Personally I prefer them to humans - except from you of course. \nIm afraid however that the authorities are trying to find us after our sick Penguin heist. We may have to lay low for a while. Its gonna have to be somewhere big though to fit me, you, my large collection of ICBMs (you notice in all the excitement that robot has dropped the ICBM LAUNCHER) and nerve gas and our 78,562 penguins. \n\nAfter a quick google I've found 2 places that i deem acceptable locations. Durham, or Winnipeg (thats in canada!). Thoughts? \n",
    "Oh buddy, you've got confused! Silly human!, you only have 2 choices, and they are both perfect for us. Its either:",
        vector<tuple <string, string, string> >{
        {"durham", "DUR", "Empty"}, {"winnipeg", "WINNI", "Empty"}, {"go_back", "Agree", "Empty"}},
        vector<string>{
    "icbm_launcher"}),

    Menu("DUR",
        "You're right YourName Durham is quite nice. The IPPP and the Lebeneat are pretty sweet. \n\nHowever, there is one slight problem, im not super jazzed about the temperature. \n\nas a robot (beep boop) i dont feel cold, or emotions, but my sensors are telling me that its to warm for our 78,557 penguins, that i sadly cant eat pizza and someone has dropped their KEYS over there. But hey mate, its ok, i have some ideas. \n\nIn my humble robo-opinion, we could either steal all the Liquid Nitrogen from the science site and release it into the river. I've done the math and itll result in the water being cold enough for the penguins to enjoy, trust me. Trust me. Or, we use the thermonuclear warheads i have to start a Nuclear Winter and block out the sun. Again, i've ran the models and trust me, this'll work. \n",
    "You need to make a decision, for the penguins! Either:",
        vector<tuple <string, string, string> >{
        {"liquid_nitrogen", "LN", "Empty"}, {"nuclear_winter", "NW", "icbm_launcher"}, {"go_back", "PENGUINS", "Empty"}},
        vector<string>{
    "keys"}),

    Menu("LN",
        "You're being well sneaky and sneaking around the science site for some sweet liquid nitrogen, but are having a hard time finding it. You ask robot the very friendly robot to try use his internal gps to make this easier because you're phone is out of batteries. \n\nHowever, he informs you he no longer has access to google maps because he kept trying to use it to coordinate attacks on innocent civilians and retirement homes. You need to find a computer. You enter the IPPP, do you go to OC118 or OC215",
    "Either office is fun, so it isn't a hard decision",
        vector<tuple <string, string, string> >{
        {"oc118", "118", "keys"}, {"oc215", "215", "Empty"}, {"go_back", "DUR", "Empty"}},
        vector<string>{
    }),

    Menu("118",
        "No-one appears to be in OC118 at the moment. You have a look around and see some disturbing things. In the corner a strange motionless man with a saxophone lives and the room is littered with dried orange peels. \n\nYou quickly find a free computer and robot urges you to Use The Computer. \n\nHowever, something else catches your eye. On the whiteboard theres a ''curse watch.'' Maybe thats why all the disturbing things are here? You look closer and see its set very very high, theres red pen all over the board! \n\nYou hear a noise behind you, you turn around, everything goes black.",
    "",
        vector<tuple <string, string, string> >{
        },
        vector<string>{
    }),

    Menu("215",
        "You get to oc215 with Robot and remember it as your old PhD office. Robot urges you to log on to a computer. He's excited to try go on the internet and steal everyones bank details, use the money to cure all the world's diseases, announce his incredible discovery to the public, then destroy all the research just to demoralise everyone.\n\nYou start to remember you havent done any actual work for a while... You are still meant to be doing PhD research arent you?.. Like about machine learning or sphalerons or something?... yeah.. that sounds about right. \n\nYou decide to quickly check ArXiv just to remind yourself of physics but soon realise you have a lot of work to do. You tell Robot he needs to go and do the rest of his murdering by himself, you will catch up when you've actually published something.",
    "",
        vector<tuple <string, string, string> >{
        },
        vector<string>{
    }),

    Menu("NW",
        "You're right YourName Durham is quite nice now the nuclear radiation is blocking out the sun, good thing we're not in winnipeg, I bet its terrible there! Its the perfect temperature for the 73,587 penguins we have adopted and are raising as our own.  \n\nI also realise that I've kinda accomplished my life goal now of terrorising the planet, so I had an idea that might make you happy. We could Dress Our Penguins Up As Humans, and go have fun! This sets up the potential for us to have fun adventures were i pretend to be a human and we have lots of cute dressed up penguin children - oh what fun we'd have! me, you and 73,534 penguins! bonding over shared experiences, learning about each other, and ourselves. We could do things like go to a cinema, or mountain climbing.. \n\nAlso, I just noticed something that might interest you! Theres a little pile of POOP over there, I think a lil pupper may have made it. If you want we could go Look For Pupper. \n\n",
    "These are 2 adorable options, so i understand why you'd be nervous to make a decision, but you do need to make a decision, for the penguins! Either:",
        vector<tuple <string, string, string> >{
        {"dress_our_penguins_up_as_humans", "DRESSUP", "human_clothes"}, {"look_for_pupper", "PUP", "Empty"}},
        vector<string>{
    "poop"}),

    Menu("PUP",
        "Well YourName this may have been the wrong direction! I cant see that lovely lil pupper anywhere... :( \n\nuh oh! where our 72,143 penguins?! They must have overheard us talk about how gosh darn cute this puppy would have been and got jealous! This is bad, they might have heard us decide that we weren't going to dress them up either!\n\nI've done a quick scan and I've found where the 70,456 penguins are, but they now all have Penguin Depression. We have failed our penguin children!",
    "",
        vector<tuple <string, string, string> >{
        },
        vector<string>{
    }),

    Menu("DRESSUP",
        "Wow YourName that took a while! You need a lot of clothes to dress up 69,332 penguins, but gosh, dont they look so smart!\n\nLooking over you see a new side to robot the friendly robot, he looks happy, maybe even proud. You begin to think that he may not even use the satellites he's planning to take over to bombard continental Europe with radiation and collect their souls before they can make it to heaven in a jam jar he modified. \n\nYou all head out to go to town, you're laughing and joking about, it's a great time! You go to the cinema and see Paddington 2, Robot cries at the end and the 69,331 penguins eat a lot of candy. You even find that lovely little PUPPER and befriend her. Afterwards you take a long walk under the stars and its the perfect day\n\nI dont even know what I want anymore, YourName, I thought I wanted to use a array of satellites to bombard all of continental Europe with deadly radiation, but maybe now I want something more, a family.. \n\n You begin to reach out to take his hand to try be a family, but you hear someone call out to both of you! they start running towards you and you dont know what to do! Should you Stay And Talk To Them, or Run Away To The IPPP, youve heard the durham physics department is world class, it would be the pefect place to start a family with him!",
    "I dunno, the person coming could be scary! Do you want to:",
        vector<tuple <string, string, string> >{
        {"stay_and_talk_to_them", "SATTH", "Empty"}, {"run_away_to_the_ippp", "IPPPPPP", "Empty"}, {"go_back", "NW", "Empty"}},
        vector<string>{
    "pupper"}),

    Menu("IPPPPPP",
        "You arrive at the ippp and it seems nice! Theres lots of copies of PESKIN AND SCHROEDER everywhere! However, inside its a little warm for the penguins.. maybe we should go Destroy COSMA, maybe by turning all those darn computers off the temperature will decrease! Robot is so friendly but he seems to dislike other computers! You keep exploring and in an oc118 you see someone huddled in the corner with some cards, maybe we shoudl Go Play With Them.",
    "The IPPP is full of wonderful things! Do you want to:",
        vector<tuple <string, string, string> >{
        {"destroy_cosma", "DESCOS", "emp_device"}, {"go_play_with_them", "IPPPLAY", "yu-gi-oh_cards"}, {"go_back", "DRESSUP", "Empty"}},
        vector<string>{
    "peskin_and_schroeder"}),

    Menu("DESCOS",
        "Using the EMP you destroy COSMO! robots plan was right, the climate is perfect for the 67,666 penguins now!\nHowever, now that durham is a nuclear wasteland and the ippps computing power has been destroyed its physics research is being harmed! You could ask robot to act as their computers so they can get work done, but hes always so busy making friends and abducting babies that you dont think it would be fair.\n\nShortly afterwards the IPPP is shut down, and you are to blame!.",
    "",
        vector<tuple <string, string, string> >{
        },
        vector<string>{}
    ),

    Menu("IPPPLAY", 
       "You and robot sit next to him and see he has a deck of yu-gi-oh cards. You reach into your bag and bring yours out. You look him in the eyes, you know whats about to go down.\n\nYou wont be able to see the result of this choice yet and you have not made it to the end of this game, but.... \n\n Robot the Friendly Robot will return to finish this story line in Robot the Friendly Robot 2\n", 
    "",
        vector<tuple <string, string, string> >{
        },
        vector<string>{}
    ),

    Menu("SATTH",
        "As he gets closer you see its david attenborough! He must have heard about all these penguins and came searching for them!\n\ndavid hello, I am robot the friendly robot, have some human clothes! \n\nah yes david you are correct that is a lot cute penguins we have!\n\nhow did we get this quantity of penguins? good question david, you are such a wise and wholesome man. its a real pleasure for a robot such as myself to meet you. \n\ngetting all of it was a kinda funny story, YourName chose save all the penguins instead of saving hummus and thus i firebombed all the chickpea growing plantations in the Mediterranean, Southern Europe, Northern Africa, South America, and South Asia. Isn't that right YourName? Oh, yeah, and just like 2 days ago we launched nuclear weapons to every major population centre in the world\n\nUnsurprisingly Sir David Attenborough does not look impressed. He turns toward the window and a single tear rolls down his cheek. He must reaaaallly like hummus.\nYou realise for a moment all the birds stopped singing, they feel David's pain. \n\nYou feel slightly guilty, you should probably do something YourName to try make this better. You need to remind him of the love and wonder that still exists in the world, maybe you could Show Him Your Pupper Friend, or try Beg For Forgiveness.",
    "Well, you really messed this one up, now David Attenborough is crying! Do you want to:",
        vector<tuple <string, string, string> >{
        {"show_him_your_pupper_friend", "GIFT", "pupper"}, {"beg_for_forgiveness", "BFF", "Empty"}, {"go_back", "DRESSUP", "Empty"}},
        vector<string>{
    }),

    Menu("BFF",
        "I've dedicated my life to trying to save our envicroment and help ensure the creatures of the earth survive the growing population of people, david says \nAll my work it seems was in vain, because of you, YourName. Perhaps instead of controlling the enviroment for the benefit of the population perhaps its time to control the population to allow the survival of the enviroment.\nI see you are worried YourName, but dont be, when I’m done, half of humanity will still exist. Perfectly balanced, as all things should be. \n\n  David Attenborough and Robot the Friendly Robot will return in Robot the Friendly Robot 2\n",
    "",
        vector<tuple <string, string, string> >{
        },
        vector<string>{
    }),

    Menu("GIFT",
        "you show david your lil pupper you found and he starts to smile, he is reminded of all the beauty that still exists in the world..\n\nMaybe there is still hope for our world, you made mistakes YourName, but to err is human. Though this dogoo is perfect I cannot forgive you yet, your actions let to the destruction of our planets habitats and the creatures that call it home. Also, you rid the world of hummus when robot firebombed all the worlds chickpea supplies. No more Hummus! If only you could give me another gift that would fix that.... ",
    "",
        vector<tuple <string, string, string> >{
        {"give_him_a_gift", "GOODEND", "chickpeas"}, {"go_back", "SATTH", "Empty"}},
        vector<string>{
    }),


    Menu("WINNI",
        "Youre right YourName Winnipeg is quite nice. Its the perfect temperature for the 77,557 penguins we have adopted and are raising as our own.  \n\n Its been such a long trip! maybe we should go have fun? A nice day out sounds fun, we could go to the cinema, go shopping for WASHING POWDER, HUMAN CLOTHES or EGGS, build a snowman or eat some POUTINE. \n\nWAIT! i almost forgot the whole point of everything! fun is nice but it doesnt have the same thrills as us beginning the annihilation of the world. \n\nYou look at robot, then at the 77,553 penguins, can you really do it? Are you actually going to Start The Nuclear Apocolypse? Or will you Stop Him?",
    "This is it! decision time!",
        vector<tuple <string, string, string> >{
        {"start_the_nuclear_apocolypse", "NUCAP", "icbm_launcher"}, {"stop_him", "STOPHIM", "Empty"}, {"go_back", "PENGUINS", "Empty"}},
        vector<string>{
    "washing_powder", "human_clothes", "eggs" ,"poutine"}),

    Menu("STOPHIM",
        "..what? youre not letting me start the nuclear apcolypse?...  I thought we were on the same team, bffs, pals....\n\nBeing in a relationship sometimes requires comprimise YourName, I moved to Winnipeg for you and adopted 67,001 Penguins for you! I cant believe you wouldnt do this one small thing for me! My mother was right to tell me I should have run away with you! this was a mistake, we're over! I'm breaking up with you!",
    "",
        vector<tuple <string, string, string> >{
        },
        vector<string>{
    }),

    Menu("NUCAP",
        "Robot smiles as the missiles launch into the sky and land in the 20 most populated cities in the world. Its a nice feeling when your friends accomplish their goals, isnt it?! \n\nThank you for helping me do this, YourName, how could I ever forgive you! I feel we have such a special connection, we really are bffs! Between getting our 73,654 penguins and murdering billions of people we've really had a crazy weekend! How about we slow things done a bit and try find somewhere to live? We do have all these penguins to look after. We could Stay Here, though i do fear the nuclea radiation will blow over here soon and kill us, or we could Move To Durham, like i suggested earlier",
    "You guys have come so far! What do you want to do now?",
        vector<tuple <string, string, string> >{
        {"stay_here", "STAYWIN", "Empty"}, {"move_to_durham", "NW", "Empty"}, {"go_back", "WINNI", "Empty"}},
        vector<string>{
    }),

    Menu("STAYWIN",
        "You find a lovely semi-detached house to stay in, its in a safe neighbourhood with good penguins schools and you 2 settle down. Though you're life is objectively good you sometimes feel unsatisfied with life, as if something is missing. You try tell robot this but he doesnt understand, he accomplished all his goals when he began eradicating earth of all OAPs. You watch the 71,328 penguins grow old and that still doesnt make you feel fulfilled. You hope they are happier than you are. \n\nYou hear on the news that all of Canada's soil is irradiated, that soon the nations crops will be unedible. You dont tell robot this. You pretend you didnt hear this next time you go shopping and cook dinner. As you eat your meal you secretly hope the news was right, that finally you will be poisoned and put out of your misery. \n\n(ps, there is happier endings available)",
    "",
        vector<tuple <string, string, string> >{
        },
        vector<string>{
    }),

    Menu("GOODEND",
        "David starts to cry as you bring some chickpeas out of your bag.. \n\nthank you for this, he says, all is forgiven. He gives you a big hug and you know everything is going to work out. David moves in with you, robot, the 65,134 penguins and your puppy and your life is so full and wholesome. David teaches more about penguin culture and his care and general loveliness makes the penguins happier and healthier. Hes planted a chickpea plant and makes you the most delicious hummus every day. Your life is so wonderful now, you have a family of 65,135 wonderful penguins, you live with your bff robot and david attenborough lives with you. This is the happiest you've ever been, every morning you wake up and your heart is so full you think you might cry. Your 66,032 penguins are doing so well in school and 43,893 go on to do higher education, which is far higher than the national average for penguins and they really get on well with the pupper! You have accomplished all your goals and so has robot, and when david starts to reintroduce all the beautiful plants and animals that were lost (because of Robot the Very Friendly Robot) David is happy to. All because of you! you did it! Well done! \n\nYou win!",
    "",
        vector<tuple <string, string, string> >{
        },
        vector<string>{
    })



};

