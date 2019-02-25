cosTheta = pow(1-u[0],1/(1+s));
sinTheta = sqrt(1-cosTheta*cosTheta);
phi = 2*M_PI*u[1];
x = cos(phi)*sinTheta;
y = sin(phi)*sinTheta;
z = cosTheta;
