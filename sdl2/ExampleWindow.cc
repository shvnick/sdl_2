/*
 * ExampleWindow.cc
 *
 *  Created on: 18 мар. 2021 г.
 *      Author: Никита
 */
#include "ExampleWindow.h"

#include <stdexcept>
#include <SDL2/SDL_image.h>

ExampleWindow::ExampleWindow(int width, int height):
	Window(width, height),
	_cloudbig_x(-264), _cloudbig_y(-100), _cloudbig_phase(0.),

	_cloudwhite1_x(800), _cloudwhite1_y(30),
	_cloudwhite2_x(0), _cloudwhite2_y(0),

	_mountain_x(30), _mountain_y(30),
	_mountain2_x(_width+30), _mountain2_y(30),

	_road_x(0), _road_y(0),
	_road2_x(_width+0), _road2_y(0),

	_sun_x(1000), _sun_y(-100),

	_billboard_x(550), _billboard_y(200),
	_billboard2_x(_width+550), _billboard2_y(200),

	_deer_x(30), _deer_y(230),

	_light_x(500), _light_y(100),
	_light2_x(_width+500), _light2_y(100),

	_sky_x(0), _sky_y(0),

	_leaf_x(0), _leaf_y(0),
	_leaf2_x(_width+0), _leaf2_y(0),

	_tree_x(_width-755), _tree_y(0),
	_tree2_x(_width*2-755), _tree2_y(0)
{
	_sky = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "sky.png"),
				SDL_DestroyTexture);
	_cloudbig = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "cloudbig.png"),
			SDL_DestroyTexture);
	_cloudwhite = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "cloudwhite.png"),
				SDL_DestroyTexture);
	_forest = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "forest.png"),
				SDL_DestroyTexture);
	_mountain = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "mountain.png"),
				SDL_DestroyTexture);
	_road = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "road.png"),
				SDL_DestroyTexture);
	_leaf = std::shared_ptr<SDL_Texture>(
					IMG_LoadTexture(_renderer.get(), "leaf.png"),
					SDL_DestroyTexture);
	_sun = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "sun.png"),
				SDL_DestroyTexture);
	_billboard = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "billboard.png"),
				SDL_DestroyTexture);
	_deer = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "deer.png"),
				SDL_DestroyTexture);
	_light = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "light.png"),
				SDL_DestroyTexture);
	_tree = std::shared_ptr<SDL_Texture>(
					IMG_LoadTexture(_renderer.get(), "tree.png"),
					SDL_DestroyTexture);
}

void ExampleWindow::render() {
	SDL_SetRenderDrawColor(_renderer.get(), 32, 32, 96, 255);
	SDL_RenderClear(_renderer.get());

	SDL_SetRenderDrawColor(_renderer.get(), 255, 255, 255, 255);

	SDL_Rect sky_rect { _sky_x, _sky_y, 1200, 600 };
	SDL_RenderCopy(_renderer.get(), _sky.get(), nullptr, &sky_rect);

	SDL_Rect sun_rect { _sun_x, _sun_y, 228, 222 };
	SDL_RenderCopy(_renderer.get(), _sun.get(), nullptr, &sun_rect);

	SDL_Rect cloudbig_rect { _cloudbig_x, _cloudbig_y, 1000, 903 };
	SDL_RenderCopy(_renderer.get(), _cloudbig.get(), nullptr, &cloudbig_rect);

	SDL_Rect mountain_rect { _mountain_x, _mountain_y, 1200, 325 };
	SDL_RenderCopy(_renderer.get(), _mountain.get(), nullptr, & mountain_rect);
	SDL_Rect mountain2_rect { _mountain2_x, _mountain2_y, 1200, 325 };
	SDL_RenderCopy(_renderer.get(), _mountain.get(), nullptr, & mountain2_rect);

	SDL_Rect cloudwhite1_rect { _cloudwhite1_x, _cloudwhite1_y, 217, 96 };
	SDL_RenderCopy(_renderer.get(), _cloudwhite.get(), nullptr, &cloudwhite1_rect);
	SDL_Rect cloudwhite2_rect { _cloudwhite2_x, _cloudwhite2_y, 247, 116 };
	SDL_RenderCopy(_renderer.get(), _cloudwhite.get(), nullptr, &cloudwhite2_rect);

	SDL_Rect road_rect { _road_x, _road_y, 1200, 734 };
	SDL_RenderCopy(_renderer.get(), _road.get(), nullptr, &road_rect);
	SDL_Rect road2_rect { _road2_x, _road2_y, 1200, 734 };
	SDL_RenderCopy(_renderer.get(), _road.get(), nullptr, &road2_rect);

	SDL_Rect billboard_rect { _billboard_x, _billboard_y, 220, 257 };
	SDL_RenderCopy(_renderer.get(), _billboard.get(), nullptr, &billboard_rect);
	SDL_Rect billboard2_rect { _billboard2_x, _billboard2_y, 220, 257 };
	SDL_RenderCopy(_renderer.get(), _billboard.get(), nullptr, &billboard2_rect);

	SDL_Rect leaf_rect { _leaf_x, _leaf_y, 1200, 469};
	SDL_RenderCopy(_renderer.get(), _leaf.get(), nullptr, &leaf_rect);
	SDL_Rect leaf2_rect { _leaf2_x, _leaf2_y, 1200, 469};
	SDL_RenderCopy(_renderer.get(), _leaf.get(), nullptr, &leaf2_rect);

	SDL_Rect deer_rect { _deer_x, _deer_y, 330, 302 };
	SDL_RenderCopy(_renderer.get(), _deer.get(), nullptr, &deer_rect);

	SDL_Rect light_rect { _light_x, _light_y, 700, 700};
	SDL_RenderCopy(_renderer.get(), _light.get(), nullptr, &light_rect);
	SDL_Rect light2_rect { _light2_x, _light2_y, 700, 700};
	SDL_RenderCopy(_renderer.get(), _light.get(), nullptr, &light2_rect);

	SDL_Rect tree_rect { _tree_x, _tree_y, 969, 900};
	SDL_RenderCopy(_renderer.get(), _tree.get(), nullptr, &tree_rect);
	SDL_Rect tree2_rect { _tree2_x, _tree2_y, 969, 900};
	SDL_RenderCopy(_renderer.get(), _tree.get(), nullptr, &tree2_rect);
}

void ExampleWindow::do_logic() {
	_cloudbig_x=_cloudbig_x+2;
	if (_cloudbig_x >= width())
		_cloudbig_x = -656;
	_cloudbig_y += 2 * sin(_cloudbig_phase);
	_cloudbig_phase += 0.09;

	_cloudwhite1_x=_cloudwhite1_x+2;
		if (_cloudwhite1_x >= width())
			_cloudwhite1_x = -256;
	_cloudwhite2_x=_cloudwhite2_x+2;
		if (_cloudwhite2_x >= width())
			_cloudwhite2_x = -256;

		_road_x--; if (_road_x <= -width()) _road_x = _road_x+(_width*2);
		_leaf_x--; if (_leaf_x <= -width()) _leaf_x = _leaf_x+(_width*2);
		_light_x--; if (_light_x <= -width()) _light_x = _light_x+(_width*2);
		_billboard_x--; if (_billboard_x <= -width()) _billboard_x = _billboard_x+(_width*2);
		_mountain_x--; if (_mountain_x <= -width()) _mountain_x = _mountain_x+(_width*2);
		_tree_x--; if (_tree_x <= -width()) _tree_x = _tree_x+(_width*2);

		_road2_x--; if (_road2_x <= -width()) _road2_x = _road2_x+(_width*2);
		_leaf2_x--; if (_leaf2_x <= -width()) _leaf2_x = _leaf2_x+(_width*2);
		_light2_x--; if (_light2_x <= -width()) _light2_x = _light2_x+(_width*2);
		_billboard2_x--; if (_billboard2_x <= -width()) _billboard2_x = _billboard2_x+(_width*2);
		_mountain2_x--; if (_mountain2_x <= -width()) _mountain2_x = _mountain2_x+(_width*2);
		_tree2_x--; if (_tree2_x <= -width()) _tree2_x = _tree2_x+(_width*2);

}

void ExampleWindow::handle_keys(const Uint8 *keys) {
	if (keys[SDL_SCANCODE_RIGHT]){
		_deer_x=_deer_x+2;
		}
	if (keys[SDL_SCANCODE_LEFT]){
		_deer_x=_deer_x-2;
	}
}
