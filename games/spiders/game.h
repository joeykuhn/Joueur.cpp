// Generated by Creer at 03:31AM on April 24, 2016 UTC, git hash: '087b1901032ab5bed5806b24830233eac5c2de55'
// There's an infestation of enemy spiders challenging your queen broodmother spider! Protect her and attack the other broodmother in this turn based, node based, game.

#ifndef JOUEUR_SPIDERS_GAME_H
#define JOUEUR_SPIDERS_GAME_H

#include "spiders.h"
#include "../../joueur/baseGame.h"

// <<-- Creer-Merge: includes -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
// you can add addtional #includes(s) here.
// <<-- /Creer-Merge: includes -->>

/// <summary>
/// There's an infestation of enemy spiders challenging your queen broodmother spider! Protect her and attack the other broodmother in this turn based, node based, game.
/// </summary>
class Spiders::Game : public Joueur::BaseGame
{
    friend Spiders::GameManager;

    protected:
        virtual void deltaUpdateField(const std::string& fieldName, boost::property_tree::ptree& delta);
        Game() { this->name = "Spiders"; };
        ~Game() {};

    public:
        /// <summary>
        /// The player whose turn it is currently. That player can send commands. Other players cannot.
        /// </summary>
        Spiders::Player* currentPlayer;

        /// <summary>
        /// The current turn number, starting at 0 for the first player's turn.
        /// </summary>
        int currentTurn;

        /// <summary>
        /// The speed at which Cutters work to do cut Webs.
        /// </summary>
        int cutSpeed;

        /// <summary>
        /// Constant used to calculate how many eggs BroodMothers get on their owner's turns.
        /// </summary>
        double eggsScalar;

        /// <summary>
        /// The starting strength for Webs.
        /// </summary>
        int initialWebStrength;

        /// <summary>
        /// The maximum number of turns before the game will automatically end.
        /// </summary>
        int maxTurns;

        /// <summary>
        /// The speed at which Spiderlings move on Webs.
        /// </summary>
        int movementSpeed;

        /// <summary>
        /// Every Nest in the game.
        /// </summary>
        std::vector<Spiders::Nest*> nests;

        /// <summary>
        /// List of all the players in the game.
        /// </summary>
        std::vector<Spiders::Player*> players;

        /// <summary>
        /// A unique identifier for the game instance that is being played.
        /// </summary>
        std::string session;

        /// <summary>
        /// The speed at which Spitters work to spit new Webs.
        /// </summary>
        int spitSpeed;

        /// <summary>
        /// How much web strength is added or removed from Webs when they are weaved.
        /// </summary>
        int weavePower;

        /// <summary>
        /// The speed at which Weavers work to do strengthens and weakens on Webs.
        /// </summary>
        int weaveSpeed;

        /// <summary>
        /// Every Web in the game.
        /// </summary>
        std::vector<Spiders::Web*> webs;


        // <<-- Creer-Merge: fields -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
        // you can add addtional fields(s) here. None of them will be tracked or updated by the server.
        // <<-- /Creer-Merge: fields -->>


        // <<-- Creer-Merge: methods -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
        // you can add addtional method(s) here.
        // <<-- /Creer-Merge: methods -->>
};

#endif
