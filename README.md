# MXNet Cpp
mxnet is a very fast and portable library in deeplearning, better than tensorflow I think. But to call it's API in cpp still very painful. However I am just working on it. After I hack it, I can call a trained model in C++ and make a very fast speed.
To using cpp in mxnet, there are serveral things need to do:
* Building source code, and we will get libmxnet.so and libmxnet_static.a library;
* Link neccesary libraries in CMakeLists.txt, this will have opencv or something else. But I already link to a static library I don't know why still gets error, after link you can solve this;

All done!