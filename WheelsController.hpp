#ifndef IG_OMNIMECANUMCONTROLLER_HPP_
#define IG_OMNIMECANUMCONTROLLER_HPP_

enum struct MODEL
{
OMNI4_CORNER,
OMNI4_SIDE,
OMNI3,
MECANUM
};

class WheelsController
{
private:
    double *v1,*v2,*v3,*v4;
    MODEL model;
public:
    WheelsController(MODEL model,double *var_1,double *var_2,double *var_3,double *var_4 = nullptr)
    :v1(var_1),v2(var_2),v3(var_3),v4(var_4){};
    void VelocityCalc(double Vx,double Vy,double w);
    void VelocityCalc(double V,double q,double w);
    ~WheelsController();
};

WheelsController::~WheelsController()
{
}


#endif /* IG_OMNIMECANUMCONTROLLER_HPP_ */