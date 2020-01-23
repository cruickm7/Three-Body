#include <stdio.h>
#include <math.h>
//#include <graphics.h>

#define G (6.67408*pow(10, -11))
#define ma (2*pow(10, 10))
#define mb (2*pow(10, 10))
#define mc (2*pow(10, 10))
#define t 100
//body variable component
double arb, artb, arcc, artc, bra, brta, brc, brtc, cra, crta, crb, crtb, afbx, afby, bfax, bfay, cfax, cfay, afcx, afcy, bfcx, bfcy, cfbx, cfby, aax, aay, bax, bay, cax, cay, apx, apy, bpx, bpy, cpx, cpy, afb, bfa, cfa, afc, bfc, cfb, afx, afy, bfx, bfy, cfx, cfy, adx, bdx, cdx, ady, bdy, cdy, avx, avy, bvx, bvy, cvx, cvy;
int main() {
    //int gd = DETECT, gm;
    apx = 50;
    apy = 50;
    avx = 0;
    avy = 0;
    bpx = 150;
    bpy = 50;
    bvx = 0;
    bvy = 0;
    cpx = 100;
    cpy = 150;
    cvx = 0;
    cvy = 0;
    //initgraph(&gd, &gm, "");
    printf("\naX\taY\tbX\tbY\tcX\tcY");
    for (int i = 0; i < 500; ++i) {
        printf("\n%f\t%f\t%f\t%f\t%f\t%f", apx, apy, bpx, bpy, cpx, cpx);
        //printf("\n%f", cpy);
        artb = atan((bpy - apy) / (bpx - apx)) * 57.2957795131;
        arb = pow((bpy - apy), 2) + pow((bpx - apx), 2);
        afb = (G * ma * mb) / arb;
        afbx = afb * cos(artb);
        afby = afb * sin(artb);

        artc = atan((cpy - apy) / (cpx - apx)) * 57.2957795131;
        arcc = pow((cpy - apy), 2) + pow((cpx - apx), 2);
        afc = (G * ma * mc) / arcc;
        afcx = afc * cos(artc);
        afcy = afc * sin(artc);

        afx = afbx + afcx;
        afy = afby + afcy;

        aax = afx / ma;
        aay = afy / ma;

        //adx = avx * t + 0.5 * aax * pow(t, 2);
        //ady = avy * t + 0.5 * aay * pow(t, 2);

        avx = aax * t;
        avy = aay * t;

        apx += avx * t;
        apy += avy * t;




        brta = atan((apy - bpy) / (apx - bpx)) * 57.2957795131;
        bra = pow((apy - bpy), 2) + pow((apx - bpx), 2);
        bfa = (G * ma * mb) / bra;
        bfax = bfa * cos(brta);
        bfay = bfa * sin(brta);

        brtc = atan((cpy - bpy) / (cpx - bpx)) * 57.2957795131;
        brc = pow((cpy - bpy), 2) + pow((cpx - bpx), 2);
        bfc = (G * mb * mc) / brc;
        bfcx = bfc * cos(brtc);
        bfcy = bfc * sin(brtc);

        bfx = bfax + bfcx;
        bfy = bfay + bfcy;

        bax = bfx / mb;
        bay = bfy / mb;

        //bdx = bvx * t + 0.5 * bax * pow(t, 2);
        //bdy = bvy * t + 0.5 * bay * pow(t, 2);

        bvx = bax * t;
        bvy = bay * t;

        bpx += bvx * t;
        bpy += bvy * t;


        crta = atan((apy - cpy) / (apx - cpx)) * 57.2957795131;
        cra = pow((apy - cpy), 2) + pow((apx - cpx), 2);
        cfa = (G * ma * mc) / cra;
        cfax = cfa * cos(crta);
        cfay = cfa * sin(crta);

        crtb = atan((bpy - cpy) / (bpx - cpx)) * 57.2957795131;
        crb = pow((bpy - cpy), 2) + pow((bpx - cpx), 2);
        cfb = (G * mb * mc) / crb;
        cfbx = cfb * cos(crtb);
        cfby = cfb * sin(crtb);

        cfx = cfax + cfbx;
        cfy = cfay + cfby;

        cax = cfx / mc;
        cay = cfy / mc;

        //cdx = cvx * t + 0.5 * cax * pow(t, 2);
        //cdy = cvy * t + 0.5 * cay * pow(t, 2);

        cvx = cax * t;
        cvy = cay * t;

        cpx += cvx * t;
        cpy += cvy * t;
       // circle(apx, apy, 50);
        //circle(bpx, bpy, 50);
        //circle(cpx, cpy, 50);

    }
}
/*Storage
 * printf("\naX: %f\taY: %f\nbX: %f\tbY: %f\ncX: %f\tcY: %f\n", apx, apy, bpx, bpy, cpx, cpy);
 * printf("\n%f\t%f\t%f\t%f\t%f\t%f", apx, apy, bpx, bpy, cpx, cpy);
 * printf("\n(%f, %f)\t(%f, %f)\t(%f, %f)", apx, apy, bpx, bpy, cpx, cpy);
 * brta = atan((apy - bpy) / (apx - bpx)) * 57.2957795131;
        bra = sqrt(pow((apy - bpy), 2) + pow((apx - bpx), 2));
        bfa = (G * ma * mb) / pow(bra, 2);
        bfax = bfa * cos(brta);
        bfay = bfa * sin(brta);

        brtc = atan((cpy - bpy) / (cpx - bpx)) * 57.2957795131;
        brc = sqrt(pow((cpy - bpy), 2) + pow((cpx - bpx), 2));
        bfc = (G * ma * mc) / pow(brc, 2);
        bfcx = bfc * cos(brtc);
        bfcy = bfc * sin(brtc);

        bfx = bfax + bfcx;
        bfy = bfay + bfcy;

        bax = bfx / ma;
        bay = bfy / ma;

        bdx = bvx * t + 0.5 * bax * pow(t, 2);
        bdy = bvy * t + 0.5 * bay * pow(t, 2);

        bpx = bpx + bdx;
        bpy = bpy + bdy;*/