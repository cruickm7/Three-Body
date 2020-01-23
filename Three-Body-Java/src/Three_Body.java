import java.util.*;
import java.math.*;
public class Three_Body {
    public static void main(String[] args) {
        int t;
        double arb, artb, arcc, artc, bra, brta, brc, brtc, cra, crta, crb, crtb, afbx, afby, bfax, bfay, cfax, cfay, afcx, afcy, bfcx, bfcy, cfbx, cfby, aax, aay, bax, bay, cax, cay, apx, apy, bpx, bpy, cpx, cpy, afb, bfa, cfa, afc, bfc, cfb, afx, afy, bfx, bfy, cfx, cfy, adx, bdx, cdx, ady, bdy, cdy, avx, avy, bvx, bvy, cvx, cvy, G, ma, mb, mc;
        G = (6.67408 * Math.pow(10, -11));
        ma = (2 * Math.pow(10, 10));
        mb = (2 * Math.pow(10, 10));
        mc = (2 * Math.pow(10, 10));
        t = 100;
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
        System.out.println("\naX\taY\tbX\tbY\tcX\tcY");
        for (int i = 0; i < 500; ++i) {
            System.out.println(apx + "\t" + apx + "\t" + bpx + "\t" + bpy + "\t" + cpx + "\t" + cpy);
            //printf("\n%f", cpy);
            artb = Math.atan((bpy - apy) / (bpx - apx)) * 57.2957795131;
            arb = Math.pow((bpy - apy), 2) + Math.pow((bpx - apx), 2);
            afb = (G * ma * mb) / arb;
            afbx = afb * Math.cos(artb);
            afby = afb * Math.sin(artb);

            artc = Math.atan((cpy - apy) / (cpx - apx)) * 57.2957795131;
            arcc = Math.pow((cpy - apy), 2) + Math.pow((cpx - apx), 2);
            afc = (G * ma * mc) / arcc;
            afcx = afc * Math.cos(artc);
            afcy = afc * Math.sin(artc);

            afx = afbx + afcx;
            afy = afby + afcy;

            aax = afx / ma;
            aay = afy / ma;

            //adx = avx * t + 0.5 * aax * Math.pow(t, 2);
            //ady = avy * t + 0.5 * aay * Math.pow(t, 2);

            avx = aax * t;
            avy = aay * t;

            apx += avx * t;
            apy += avy * t;


            brta = Math.atan((apy - bpy) / (apx - bpx)) * 57.2957795131;
            bra = Math.pow((apy - bpy), 2) + Math.pow((apx - bpx), 2);
            bfa = (G * ma * mb) / bra;
            bfax = bfa * Math.cos(brta);
            bfay = bfa * Math.sin(brta);

            brtc = Math.atan((cpy - bpy) / (cpx - bpx)) * 57.2957795131;
            brc = Math.pow((cpy - bpy), 2) + Math.pow((cpx - bpx), 2);
            bfc = (G * mb * mc) / brc;
            bfcx = bfc * Math.cos(brtc);
            bfcy = bfc * Math.sin(brtc);

            bfx = bfax + bfcx;
            bfy = bfay + bfcy;

            bax = bfx / mb;
            bay = bfy / mb;

            //bdx = bvx * t + 0.5 * bax * Math.pow(t, 2);
            //bdy = bvy * t + 0.5 * bay * Math.pow(t, 2);

            bvx = bax * t;
            bvy = bay * t;

            bpx += bvx * t;
            bpy += bvy * t;


            crta = Math.atan((apy - cpy) / (apx - cpx)) * 57.2957795131;
            cra = Math.pow((apy - cpy), 2) + Math.pow((apx - cpx), 2);
            cfa = (G * ma * mc) / cra;
            cfax = cfa * Math.cos(crta);
            cfay = cfa * Math.sin(crta);

            crtb = Math.atan((bpy - cpy) / (bpx - cpx)) * 57.2957795131;
            crb = Math.pow((bpy - cpy), 2) + Math.pow((bpx - cpx), 2);
            cfb = (G * mb * mc) / crb;
            cfbx = cfb * Math.cos(crtb);
            cfby = cfb * Math.sin(crtb);

            cfx = cfax + cfbx;
            cfy = cfay + cfby;

            cax = cfx / mc;
            cay = cfy / mc;

            //cdx = cvx * t + 0.5 * cax * Math.pow(t, 2);
            //cdy = cvy * t + 0.5 * cay * Math.pow(t, 2);

            cvx = cax * t;
            cvy = cay * t;

            cpx += cvx * t;
            cpy += cvy * t;
        }
    }
}
