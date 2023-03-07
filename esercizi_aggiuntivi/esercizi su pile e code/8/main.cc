// eg. ok => 3 4   4   3 0  1 1  2 1  3 1   2 0  3 2
// eg. no ok => 3 4   5   3 0  1 1  2 1  3 1  0 0   2 0  3 2
#include <iostream>
#include <stack>

// #define DEBUG

using namespace std;

struct position
{
    int x = -1;
    int y = -1;
};

enum cell
{
    FREE,
    OBSTACLE,
    ALREADY_VISITED
};

int main(int argc, char const *argv[])
{
    int h, w; // labyrinth size
    size_t _obstacles;
    position _obstacle;
    position startpoint, endpoint;
    int _possible_moves[4][2] = {
        {-1, 0},
        { 1, 0},
        { 0, -1},
        { 0, 1}};

    // Read data
    cout << "Insert labyrinth size (H x W): ";
    cin >> h >> w;
    cell map[h][w];

    for (int i = 0; i < h; ++i)
        for (int j = 0; j < w; ++j)
            map[i][j] = FREE;

#ifdef DEBUG
    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
            cout << map[i][j] << " ";
        cout << endl;
    }
#endif // DEBUG

    cout << "Insert the number of obstacles: ";
    cin >> _obstacles;
    for (size_t i = 0; i < _obstacles; ++i)
    {
        cout << "Insert the position of the obstacle (X and Y): ";
        cin >> _obstacle.x >> _obstacle.y;
        map[_obstacle.y][_obstacle.x] = OBSTACLE;
    }

#ifdef DEBUG
    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
            cout << map[i][j] << " ";
        cout << endl;
    }
#endif // DEBUG

    cout << "Insert a starting point: ";
    cin >> startpoint.x >> startpoint.y;
    cout << "Insert an ending point: ";
    cin >> endpoint.x >> endpoint.y;

    // Check if the journey is possible
    stack<position> to_visit;
    to_visit.push(position{startpoint.x, startpoint.y});
    map[startpoint.y][startpoint.x] = ALREADY_VISITED;

#ifdef DEBUG
    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
            cout << map[i][j] << " ";
        cout << endl;
    }
#endif // DEBUG

    while (!to_visit.empty())
    {
        position visiting = to_visit.top();
        to_visit.pop();

        for (size_t i = 0; i < 4; ++i)
        {
            position tmp = position{visiting.x + _possible_moves[i][0], visiting.y + _possible_moves[i][1]};
            if (tmp.x >= 0 && tmp.x < w && tmp.y >= 0 && tmp.y < h && map[tmp.y][tmp.x] == FREE)
            {
                to_visit.push(position{tmp.x, tmp.y});
                map[tmp.y][tmp.x] = ALREADY_VISITED;
            }
        }

#ifdef DEBUG
        cout << "Partial:" << endl;
        for (int i = 0; i < h; ++i)
        {
            for (int j = 0; j < w; ++j)
                cout << map[i][j] << " ";
            cout << endl;
        }
#endif // DEBUG
    }

    if (map[endpoint.y][endpoint.x] == ALREADY_VISITED)
        cout << "Endpoint is reachable!!!" << endl;
    else
        cout << "Endpoint is not reachable :(" << endl;

    return 0;
}
