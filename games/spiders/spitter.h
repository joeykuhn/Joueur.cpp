// Generated by Creer at 05:20PM on April 08, 2016 UTC, git hash: 'e7ec4e35c89d7556b9e07d4331ac34052ac011bd'
// A Spiderling that creates and spits new Webs from the Nest it is on to another Nest, connecting them.

#ifndef JOUEUR_SPIDERS_SPITTER_H
#define JOUEUR_SPIDERS_SPITTER_H

#include "spiders.h"
#include "spiderling.h"

// <<-- Creer-Merge: includes -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
// you can add addtional #includes(s) here.
// <<-- /Creer-Merge: includes -->>

/// <summary>
/// A Spiderling that creates and spits new Webs from the Nest it is on to another Nest, connecting them.
/// </summary>
class Spiders::Spitter : public Spiders::Spiderling
{
    friend Spiders::GameManager;

    protected:
        virtual void deltaUpdateField(const std::string& fieldName, boost::property_tree::ptree& delta);
        Spitter() {};
        ~Spitter() {};

    public:
        /// <summary>
        /// The Nest that this Spitter is creating a Web to spit at, thus connecting them. Null if not spitting.
        /// </summary>
        Spiders::Nest* spittingWebToNest;


        // <<-- Creer-Merge: fields -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
        // you can add addtional fields(s) here. None of them will be tracked or updated by the server.
        // <<-- /Creer-Merge: fields -->>

        /// <summary>
        /// Creates and spits a new Web from the Nest the Spitter is on to another Nest, connecting them.
        /// </summary>
        /// <param name="nest">The Nest you want to spit a Web to, thus connecting that Nest and the one the Spitter is on.</param>
        /// <returns>True if the spit was successful, false otherwise.</returns>
        bool spit(Spiders::Nest* nest);


        // <<-- Creer-Merge: methods -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
        // you can add addtional method(s) here.
        // <<-- /Creer-Merge: methods -->>
};

#endif
