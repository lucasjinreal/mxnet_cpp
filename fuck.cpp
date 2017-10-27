//
// Created by JinTian on 26/10/2017.
//

// this file will call libfuckdriver.a and call it's inside method
#include "fuck_drive.h"
#include <iostream>
#include <string>

#include "mxnet-cpp/MxNetCpp.h"

using namespace std;
using namespace mxnet::cpp;


int main() {


    FuckDriver fuckDriver;
    fuckDriver.accelerate();
    fuckDriver.brake();
    fuckDriver.turn_left();
    cout << "ok, drive done!\n";

    cout << "===== we are now test on mxnet cpp interface ====\n";

    Context ctx_dev(DeviceType::kCPU, 0);

    NDArray x(Shape(60, 7), ctx_dev, false);
    NDArray y(Shape(60), ctx_dev, false);

    cout << x << endl;





    return 0;
}
