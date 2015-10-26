// Generated by Creer at 06:57PM on October 26, 2015 UTC, git hash: '1b69e788060071d644dd7b8745dca107577844e1'
// Can be bribed to change the next Forecast in some way.

#ifndef JOUEUR_ANARCHY_WEATHERSTATION_H
#define JOUEUR_ANARCHY_WEATHERSTATION_H

#include "anarchy.h"
#include "building.h"

// <<-- Creer-Merge: includes -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
// you can add addtional #includes(s) here.
// <<-- /Creer-Merge: includes -->>

/// <summary>
/// Can be bribed to change the next Forecast in some way.
/// </summary>
class Anarchy::WeatherStation : public Anarchy::Building
{
    friend Anarchy::GameManager;

    protected:
        virtual void deltaUpdateField(const std::string& fieldName, boost::property_tree::ptree& delta);
        WeatherStation() {};
        ~WeatherStation() {};

    public:

        // <<-- Creer-Merge: fields -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
        // you can add addtional fields(s) here. None of them will be tracked or updated by the server.
        // <<-- /Creer-Merge: fields -->>

        /// <summary>
        /// Bribe the weathermen to intensity the next Forecast by 1 or -1
        /// </summary>
        /// <param name="negative">By default the intensity will be increased by 1, setting this to true decreases the intensity by 1.</param>
        /// <returns>true if the intensity was changed, false otherwise</returns>
        bool intensify(bool negative);

        /// <summary>
        /// Bribe the weathermen to change the direction of the next Forecast by rotating it clockwise or counterclockwise.
        /// </summary>
        /// <param name="counterclockwise">By default the direction will be rotated clockwise. If you set this to true we will rotate the forecast counterclockwise instead.</param>
        /// <returns>true if the rotation worked, false otherwise.</returns>
        bool rotate(bool counterclockwise);


        // <<-- Creer-Merge: methods -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
        // you can add addtional method(s) here.
        // <<-- /Creer-Merge: methods -->>
};

#endif
