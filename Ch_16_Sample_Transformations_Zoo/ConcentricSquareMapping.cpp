a = 2*u[0] - 1;
b = 2*u[1] - 1;
if (a*a > b*b) {
    r = R*a;
    phi = (M_PI/4)*(b/a);
} else {
    r = R*b;
    phi = (M_PI/2) - (M_PI/4)*(a/b);
}
X = r*cos(phi);
Y = r*sin(phi);
