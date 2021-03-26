/*
 * ExampleWindow.h
 *
 *  Created on: 18 мар. 2021 г.
 *      Author: Никита
 */

#ifndef EXAMPLEWINDOW_H_
#define EXAMPLEWINDOW_H_

#include "Window.h"

class ExampleWindow: public Window
{
protected:
	std::shared_ptr<SDL_Texture> _cloudbig,_cloudwhite,_forest,_mountain,
	_road,_sun,_billboard,_deer,_light,_sky,_leaf,_tree;
	int _cloudbig_x, _cloudbig_y,
		_cloudwhite1_x, _cloudwhite1_y,
		_cloudwhite2_x, _cloudwhite2_y,
		_mountain_x, _mountain_y, _mountain2_x, _mountain2_y,
		_road_x, _road_y, _road2_x, _road2_y,
		_sun_x, _sun_y,
		_billboard_x, _billboard_y, _billboard2_x, _billboard2_y,
		_deer_x, _deer_y,
		_light_x, _light_y, _light2_x, _light2_y,
		_sky_x, _sky_y,
		_leaf_x, _leaf_y, _leaf2_x, _leaf2_y,
		_tree_x, _tree_y, _tree2_x, _tree2_y;

	double _cloudbig_phase;

public:
	ExampleWindow(
			int width = DEFAULT_WIDTH,
			int height = DEFAULT_HEIGHT);
	virtual ~ExampleWindow() = default;
	virtual void render() override;
	virtual void do_logic() override;
	virtual void handle_keys(const Uint8 *keys) override;
};

#endif /* EXAMPLEWINDOW_H_ */
