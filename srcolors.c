/*
 * srcolors.h
 *
 * Copyright © shiyaz
 *
 */


/*
 *
 * RGB to Color Name mappings are from:
 ! NBS/ISCC Color System Centroids       http://tx4.us/nbs-iscc.htm
 !
 ! Copyright © 2003 Voluntocracy.  Permission is granted to copy and
 ! distribute modified or unmodified versions of this color dictionary
 ! provided the copyright notice and this permission notice are preserved
 ! on all copies and the entire such work is distributed under the terms
 ! of a permission notice identical to this one.
 *
 */

#include "srcolors.h"
#include <stdio.h>

#define SAMPLESIZE 274

float 
lup255f[256] = {
    0.000000f, 0.003922f, 0.007843f, 0.011765f, 0.015686f, 0.019608f, 0.023529f, 0.027451f, 
    0.031373f, 0.035294f, 0.039216f, 0.043137f, 0.047059f, 0.050980f, 0.054902f, 0.058824f, 
    0.062745f, 0.066667f, 0.070588f, 0.074510f, 0.078431f, 0.082353f, 0.086275f, 0.090196f, 
    0.094118f, 0.098039f, 0.101961f, 0.105882f, 0.109804f, 0.113725f, 0.117647f, 0.121569f, 
    0.125490f, 0.129412f, 0.133333f, 0.137255f, 0.141176f, 0.145098f, 0.149020f, 0.152941f, 
    0.156863f, 0.160784f, 0.164706f, 0.168627f, 0.172549f, 0.176471f, 0.180392f, 0.184314f, 
    0.188235f, 0.192157f, 0.196078f, 0.200000f, 0.203922f, 0.207843f, 0.211765f, 0.215686f, 
    0.219608f, 0.223529f, 0.227451f, 0.231373f, 0.235294f, 0.239216f, 0.243137f, 0.247059f, 
    0.250980f, 0.254902f, 0.258824f, 0.262745f, 0.266667f, 0.270588f, 0.274510f, 0.278431f, 
    0.282353f, 0.286275f, 0.290196f, 0.294118f, 0.298039f, 0.301961f, 0.305882f, 0.309804f, 
    0.313726f, 0.317647f, 0.321569f, 0.325490f, 0.329412f, 0.333333f, 0.337255f, 0.341176f, 
    0.345098f, 0.349020f, 0.352941f, 0.356863f, 0.360784f, 0.364706f, 0.368627f, 0.372549f, 
    0.376471f, 0.380392f, 0.384314f, 0.388235f, 0.392157f, 0.396078f, 0.400000f, 0.403922f, 
    0.407843f, 0.411765f, 0.415686f, 0.419608f, 0.423529f, 0.427451f, 0.431373f, 0.435294f, 
    0.439216f, 0.443137f, 0.447059f, 0.450980f, 0.454902f, 0.458824f, 0.462745f, 0.466667f, 
    0.470588f, 0.474510f, 0.478431f, 0.482353f, 0.486275f, 0.490196f, 0.494118f, 0.498039f, 
    0.501961f, 0.505882f, 0.509804f, 0.513726f, 0.517647f, 0.521569f, 0.525490f, 0.529412f, 
    0.533333f, 0.537255f, 0.541176f, 0.545098f, 0.549020f, 0.552941f, 0.556863f, 0.560784f, 
    0.564706f, 0.568627f, 0.572549f, 0.576471f, 0.580392f, 0.584314f, 0.588235f, 0.592157f, 
    0.596078f, 0.600000f, 0.603922f, 0.607843f, 0.611765f, 0.615686f, 0.619608f, 0.623529f, 
    0.627451f, 0.631373f, 0.635294f, 0.639216f, 0.643137f, 0.647059f, 0.650980f, 0.654902f, 
    0.658824f, 0.662745f, 0.666667f, 0.670588f, 0.674510f, 0.678431f, 0.682353f, 0.686275f, 
    0.690196f, 0.694118f, 0.698039f, 0.701961f, 0.705882f, 0.709804f, 0.713726f, 0.717647f, 
    0.721569f, 0.725490f, 0.729412f, 0.733333f, 0.737255f, 0.741176f, 0.745098f, 0.749020f, 
    0.752941f, 0.756863f, 0.760784f, 0.764706f, 0.768627f, 0.772549f, 0.776471f, 0.780392f, 
    0.784314f, 0.788235f, 0.792157f, 0.796078f, 0.800000f, 0.803922f, 0.807843f, 0.811765f, 
    0.815686f, 0.819608f, 0.823529f, 0.827451f, 0.831373f, 0.835294f, 0.839216f, 0.843137f, 
    0.847059f, 0.850980f, 0.854902f, 0.858824f, 0.862745f, 0.866667f, 0.870588f, 0.874510f, 
    0.878431f, 0.882353f, 0.886275f, 0.890196f, 0.894118f, 0.898039f, 0.901961f, 0.905882f, 
    0.909804f, 0.913725f, 0.917647f, 0.921569f, 0.925490f, 0.929412f, 0.933333f, 0.937255f, 
    0.941176f, 0.945098f, 0.949020f, 0.952941f, 0.956863f, 0.960784f, 0.964706f, 0.968627f, 
    0.972549f, 0.976471f, 0.980392f, 0.984314f, 0.988235f, 0.992157f, 0.996078f, 1.000000f
};

char* 
sample_color_name[SAMPLESIZE] = {
    "Deep  Green", "Very  Dark  Bluish  Green", "Very Dark Greenish Blue", "Dark Greenish Blue", 
    "Dark Bluish Green", "Deep Bluish Green", "Dark Green", "Dark Olive Green", "Very Dark Yellowish Green", 
    "Very Deep Yellowish Green", "Very Dark Green", "Dark Grayish Olive", "Dark Grayish Olive Green", 
    "Dark Grayish Brown", "Olive Black", "Brownish Black", "Dark OliveBrown", "Dark Olive",
    "Dark Grayish Yellowish Brown", "Dark Grayish Green", "Dark Grayish Blue", "Blackish Green",
    "Greenish Black", "Bluish Black", "Blackish Blue", "Black", "Purplish Black", "Reddish Black",
    "Dark Blue", "Deep Blue", "Grayish Purplish Blue", "Strong Blue", "Strong Greenish Blue",
    "Moderate Greenish Blue", "Deep Greenish Blue", "Vivid Greenish Blue", "Moderate Blue", "Grayish Green",
    "Grayish Blue", "Dark Bluish Gray", "Dark Gray", "Dark Purplish Gray", "Dark Greenish Gray", 
    "Brownish Gray", "Dark Reddish Gray", "Olive Gray", "Grayish Brown", "Grayish Olive Green", "Grayish Olive", 
    "Grayish Yellowish Brown", "Dark Yellowish Green", "Moderate Bluish Green", "Vivid Bluish Green", 
    "Strong Bluish Green", "Moderate Green", "Strong Green", "Vivid Blue", "Brilliant Greenish Blue", 
    "Brilliant Blue", "Light Blue", "Light Greenish Blue", "Very Light Blue", "Very Light Purplish Blue",
    "Very Light Bluish Green", "Very Light Green", "Very Pale Green", "Greenish White", "Purplish White",
    "Bluish White", "White", "Yellowish White", "Pale Yellowish Pink", "Pinkish White", "Light Greenish Gray",
    "Light Purplish Gray", "Very Pale Purplish Blue", "Very Pale Violet", "Very Pale Blue", "Light Bluish Gray",
    "Very Light Greenish Blue", "Pale Green", "Pale Blue", "Pinkish Gray", "Light Gray", "Brownish Pink",
    "Yellowish Gray", "Light Grayish Yellowish Brown", "Grayish YellowGreen", "Light OliveGray", "Light Grayish Olive",
    "Light Grayish Brown", "Light Brownish Gray", "Reddish Gray", "Purplish Gray", "Bluish Gray", "Medium Gray",
    "Pale Purplish Blue", "Greenish Gray", "Light Green", "Light Bluish Green", "Brilliant Bluish Green", 
    "Brilliant Green", "Strong Yellowish Green", "Vivid Yellowish Green", "Light Yellowish Green",
    "Moderate Yellowish Green", "Moderate YellowGreen", "Dark Greenish Yellow", "Dark Yellow", "Dark Grayish Yellow",
    "Grayish Yellow", "Grayish Greenish Yellow", "Moderate Yellow", "Moderate Greenish Yellow", "Light YellowGreen",
    "Pale Orange Yellow", "Pale Yellow Green", "Pale Yellow", "Light Yellow", "Pale Greenish Yellow", 
    "Very Light Yellowish Green", "Brilliant Yellowish Green", "Brilliant Yellow Green", "Brilliant Greenish Yellow",
    "Light Greenish Yellow", "Brilliant Yellow", "Vivid Yellow", "Vivid Greenish Yellow", "Strong Greenish Yellow", 
    "Strong Yellow", "Deep Yellow", "Deep Greenish Yellow", "Vivid YellowGreen", "Strong YellowGreen", "Vivid Green",
    "Deep YellowGreen", "Deep Yellowish Green", "Moderate Olive Green", "Moderate Olive", "Light Olive", 
    "Moderate Olive Brown", "Deep Olive Green", "Strong Olive Green", "Light Olive Brown", "Deep Orange", 
    "Deep Reddish Brown", "Deep Brown", "Deep Yellowish Brown", "Moderate Brown", "Moderate Yellowish Brown", 
    "Strong Yellowish Brown", "Strong Brown", "Brownish Orange", "Dark Reddish Orange", "Strong Red", 
    "Deep Reddish Orange", "Vivid Red", "Strong Reddish Brown", "Vivid Reddish Orange", "Deep Yellowish Pink", 
    "Deep Orange Yellow", "Strong Orange Yellow", "Vivid Orange Yellow", "Strong Orange", "Brilliant Orange", 
    "Vivid Orange", "Brilliant Orange Yellow", "Light Orange Yellow", "Light Orange", "Vivid Yellowish Pink", 
    "Strong Yellowish Pink", "Moderate Orange", "Moderate Orange Yellow", "Light Yellowish Brown", "Light Brown", 
    "Dark Orange Yellow", "Moderate Reddish Orange", "Grayish Reddish Orange", "Strong Reddish Orange", 
    "Deep Purplish Pink", "Strong Purplish Pink", "Deep Pink", "Dark Yellowish Pink", "Dark Pink", 
    "Light Reddish Purple", "Dark Purplish Pink", "Pale Reddish Purple", "Pale Violet", "Light Grayish Reddish Brown",
    "Light Reddish Brown", "Light Grayish Purplish Red", "Light Grayish Red", "Moderate Yellowish Pink", 
    "Moderate Pink", "Grayish Yellowish Pink", "Grayish Pink", "Grayish Purplish Pink", "Pale Purple", 
    "Moderate Purplish Pink", "Strong Pink", "Vivid Pink", "Brilliant Purplish Pink", "Light Purplish Pink", 
    "Very Light Purple", "Very Pale Purple", "Pale Purplish Pink", "Light Yellowish Pink", "Pale Pink", "Light Pink",
    "Very Light Violet", "Brilliant Purple", "Light Purple", "Light Purplish Blue", "Light Violet", "Vivid Violet",
    "Vivid Purple", "Strong Reddish Purple", "Vivid Purplish Red", "Moderate Red", "Moderate Purplish Red", 
    "Strong Purplish Red", "Moderate Reddish Purple", "Grayish Purplish Red", "Moderate Reddish Brown", 
    "Grayish Red", "Grayish Reddish Brown", "Grayish Purple", "Grayish Reddish Purple", "Brilliant Purplish Blue", 
    "Brilliant Violet", "Moderate Purple", "Strong Purple", "Strong Violet", "Strong Purplish Blue", 
    "Moderate Purplish Blue", "Moderate Violet", "Grayish Violet", "Deep Purple", "Very Deep Reddish Purple", 
    "Very Deep Purple", "Deep Violet", "Vivid Purplish Blue", "Deep Purplish Blue", "Dark Violet", 
    "Dark Purplish Blue", "Blackish Purple", "Blackish Red", "Very Dark Purplish Red", "Very Dark Reddish Purple",
    "Very Dark Purple", "Dark Reddish Purple", "Dark Purple", "Dark Grayish Purple", "Dark Grayish Red", 
    "Dark Yellowish Brown", "Dark Brown", "Dark Grayish Reddish Brown", "Dark Reddish Brown",
    "Dark Red", "Dark Purplish Red", "Very Deep Purplish Red", "Very Dark Red", "Deep Purplish Red",
    "Deep Red", "Very Deep Red", "Deep Reddish Purple", "Vivid Reddish Purple", "Black",
    "Dark Gray", "Dim Gray", "Gray", "Light Gray", "Silver", "White Smoke"
};

char* 
sample_color_group[SAMPLESIZE] = {
    "Deep  Green", "Very  Dark  Bluish  Green", "Very Dark Greenish Blue", "Dark Greenish Blue", 
    "Dark Bluish Green", "Deep Bluish Green", "Dark Green", "Dark Olive Green", "Very Dark Yellowish Green", 
    "Very Deep Yellowish Green", "Very Dark Green", "Dark Grayish Olive", "Dark Grayish Olive Green", 
    "Dark Grayish Brown", "Olive Black", "Brownish Black", "Dark OliveBrown", "Dark Olive",
    "Dark Grayish Yellowish Brown", "Dark Grayish Green", "Dark Grayish Blue", "Blackish Green",
    "Greenish Black", "Bluish Black", "Blackish Blue", "Black", "Purplish Black", "Reddish Black",
    "Dark Blue", "Deep Blue", "Grayish Purplish Blue", "Strong Blue", "Strong Greenish Blue",
    "Moderate Greenish Blue", "Deep Greenish Blue", "Vivid Greenish Blue", "Moderate Blue", "Grayish Green",
    "Grayish Blue", "Dark Bluish Gray", "Dark Gray", "Dark Purplish Gray", "Dark Greenish Gray", 
    "Brownish Gray", "Dark Reddish Gray", "Olive Gray", "Grayish Brown", "Grayish Olive Green", "Grayish Olive", 
    "Grayish Yellowish Brown", "Dark Yellowish Green", "Moderate Bluish Green", "Vivid Bluish Green", 
    "Strong Bluish Green", "Moderate Green", "Strong Green", "Vivid Blue", "Brilliant Greenish Blue", 
    "Brilliant Blue", "Light Blue", "Light Greenish Blue", "Very Light Blue", "Very Light Purplish Blue",
    "Very Light Bluish Green", "Very Light Green", "Very Pale Green", "Greenish White", "Purplish White",
    "Bluish White", "White", "Yellowish White", "Pale Yellowish Pink", "Pinkish White", "Light Greenish Gray",
    "Light Purplish Gray", "Very Pale Purplish Blue", "Very Pale Violet", "Very Pale Blue", "Light Bluish Gray",
    "Very Light Greenish Blue", "Pale Green", "Pale Blue", "Pinkish Gray", "Light Gray", "Brownish Pink",
    "Yellowish Gray", "Light Grayish Yellowish Brown", "Grayish YellowGreen", "Light OliveGray", "Light Grayish Olive",
    "Light Grayish Brown", "Light Brownish Gray", "Reddish Gray", "Purplish Gray", "Bluish Gray", "Medium Gray",
    "Pale Purplish Blue", "Greenish Gray", "Light Green", "Light Bluish Green", "Brilliant Bluish Green", 
    "Brilliant Green", "Strong Yellowish Green", "Vivid Yellowish Green", "Light Yellowish Green",
    "Moderate Yellowish Green", "Moderate YellowGreen", "Dark Greenish Yellow", "Dark Yellow", "Dark Grayish Yellow",
    "Grayish Yellow", "Grayish Greenish Yellow", "Moderate Yellow", "Moderate Greenish Yellow", "Light YellowGreen",
    "Pale Orange Yellow", "Pale Yellow Green", "Pale Yellow", "Light Yellow", "Pale Greenish Yellow", 
    "Very Light Yellowish Green", "Brilliant Yellowish Green", "Brilliant Yellow Green", "Brilliant Greenish Yellow",
    "Light Greenish Yellow", "Brilliant Yellow", "Vivid Yellow", "Vivid Greenish Yellow", "Strong Greenish Yellow", 
    "Strong Yellow", "Deep Yellow", "Deep Greenish Yellow", "Vivid YellowGreen", "Strong YellowGreen", "Vivid Green",
    "Deep YellowGreen", "Deep Yellowish Green", "Moderate Olive Green", "Moderate Olive", "Light Olive", 
    "Moderate Olive Brown", "Deep Olive Green", "Strong Olive Green", "Light Olive Brown", "Deep Orange", 
    "Deep Reddish Brown", "Deep Brown", "Deep Yellowish Brown", "Moderate Brown", "Moderate Yellowish Brown", 
    "Strong Yellowish Brown", "Strong Brown", "Brownish Orange", "Dark Reddish Orange", "Strong Red", 
    "Deep Reddish Orange", "Vivid Red", "Strong Reddish Brown", "Vivid Reddish Orange", "Deep Yellowish Pink", 
    "Deep Orange Yellow", "Strong Orange Yellow", "Vivid Orange Yellow", "Strong Orange", "Brilliant Orange", 
    "Vivid Orange", "Brilliant Orange Yellow", "Light Orange Yellow", "Light Orange", "Vivid Yellowish Pink", 
    "Strong Yellowish Pink", "Moderate Orange", "Moderate Orange Yellow", "Light Yellowish Brown", "Light Brown", 
    "Dark Orange Yellow", "Moderate Reddish Orange", "Grayish Reddish Orange", "Strong Reddish Orange", 
    "Deep Purplish Pink", "Strong Purplish Pink", "Deep Pink", "Dark Yellowish Pink", "Dark Pink", 
    "Light Reddish Purple", "Dark Purplish Pink", "Pale Reddish Purple", "Pale Violet", "Light Grayish Reddish Brown",
    "Light Reddish Brown", "Light Grayish Purplish Red", "Light Grayish Red", "Moderate Yellowish Pink", 
    "Moderate Pink", "Grayish Yellowish Pink", "Grayish Pink", "Grayish Purplish Pink", "Pale Purple", 
    "Moderate Purplish Pink", "Strong Pink", "Vivid Pink", "Brilliant Purplish Pink", "Light Purplish Pink", 
    "Very Light Purple", "Very Pale Purple", "Pale Purplish Pink", "Light Yellowish Pink", "Pale Pink", "Light Pink",
    "Very Light Violet", "Brilliant Purple", "Light Purple", "Light Purplish Blue", "Light Violet", "Vivid Violet",
    "Vivid Purple", "Strong Reddish Purple", "Vivid Purplish Red", "Moderate Red", "Moderate Purplish Red", 
    "Strong Purplish Red", "Moderate Reddish Purple", "Grayish Purplish Red", "Moderate Reddish Brown", 
    "Grayish Red", "Grayish Reddish Brown", "Grayish Purple", "Grayish Reddish Purple", "Brilliant Purplish Blue", 
    "Brilliant Violet", "Moderate Purple", "Strong Purple", "Strong Violet", "Strong Purplish Blue", 
    "Moderate Purplish Blue", "Moderate Violet", "Grayish Violet", "Deep Purple", "Very Deep Reddish Purple", 
    "Very Deep Purple", "Deep Violet", "Vivid Purplish Blue", "Deep Purplish Blue", "Dark Violet", 
    "Dark Purplish Blue", "Blackish Purple", "Blackish Red", "Very Dark Purplish Red", "Very Dark Reddish Purple",
    "Very Dark Purple", "Dark Reddish Purple", "Dark Purple", "Dark Grayish Purple", "Dark Grayish Red", 
    "Dark Yellowish Brown", "Dark Brown", "Dark Grayish Reddish Brown", "Dark Reddish Brown",
    "Dark Red", "Dark Purplish Red", "Very Deep Purplish Red", "Very Dark Red", "Deep Purplish Red",
    "Deep Red", "Very Deep Red", "Deep Reddish Purple", "Vivid Reddish Purple", "Black",
    "Dark Gray", "Dim Gray", "Gray", "Light Gray", "Silver", "White Smoke"
};

float 
sample_color_red[SAMPLESIZE] = {
    0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.105882f, 0.168627f, 
    0.090196f, 0.000000f, 0.109804f, 0.211765f, 0.192157f, 0.243137f, 0.145098f, 0.156863f, 
    0.231373f, 0.250980f, 0.282353f, 0.227451f, 0.211765f, 0.101961f, 0.117647f, 0.125490f, 
    0.125490f, 0.133333f, 0.141176f, 0.156863f, 0.000000f, 0.000000f, 0.298039f, 0.000000f, 
    0.000000f, 0.211765f, 0.180392f, 0.000000f, 0.262745f, 0.368627f, 0.325490f, 0.317647f, 
    0.333333f, 0.364706f, 0.305882f, 0.356863f, 0.360784f, 0.341176f, 0.388235f, 0.317647f, 
    0.356863f, 0.494118f, 0.207843f, 0.192157f, 0.000000f, 0.000000f, 0.231373f, 0.000000f, 
    0.000000f, 0.137255f, 0.286275f, 0.439216f, 0.400000f, 0.631373f, 0.701961f, 0.588235f, 
    0.556863f, 0.780392f, 0.874510f, 0.909804f, 0.913725f, 0.949020f, 0.941176f, 0.925490f, 
    0.917647f, 0.698039f, 0.749020f, 0.752941f, 0.768627f, 0.737255f, 0.705882f, 0.611765f, 
    0.552941f, 0.568627f, 0.756863f, 0.725490f, 0.760784f, 0.749020f, 0.682353f, 0.560784f, 
    0.541176f, 0.549020f, 0.584314f, 0.556863f, 0.560784f, 0.545098f, 0.505882f, 0.517647f, 
    0.549020f, 0.490196f, 0.415686f, 0.400000f, 0.000000f, 0.243137f, 0.266667f, 0.152941f, 
    0.576471f, 0.403922f, 0.541176f, 0.596078f, 0.670588f, 0.631373f, 0.760784f, 0.725490f, 
    0.788235f, 0.725490f, 0.788235f, 0.980392f, 0.854902f, 0.952941f, 0.972549f, 0.921569f, 
    0.713726f, 0.513726f, 0.741176f, 0.913725f, 0.917647f, 0.980392f, 0.952941f, 0.862745f, 
    0.745098f, 0.831373f, 0.686275f, 0.607843f, 0.552941f, 0.494118f, 0.000000f, 0.274510f, 
    0.000000f, 0.290196f, 0.400000f, 0.525490f, 0.423529f, 0.137255f, 0.250980f, 0.588235f, 
    0.745098f, 0.337255f, 0.349020f, 0.396078f, 0.435294f, 0.509804f, 0.600000f, 0.501961f, 
    0.682353f, 0.619608f, 0.737255f, 0.666667f, 0.745098f, 0.533333f, 0.886275f, 0.901961f, 
    0.788235f, 0.917647f, 0.964706f, 0.929412f, 0.992157f, 0.952941f, 1.000000f, 0.984314f, 
    0.980392f, 1.000000f, 0.976471f, 0.850980f, 0.890196f, 0.756863f, 0.650980f, 0.745098f, 
    0.796078f, 0.705882f, 0.850980f, 0.870588f, 0.901961f, 0.894118f, 0.768627f, 0.752941f, 
    0.717647f, 0.756863f, 0.666667f, 0.588235f, 0.592157f, 0.658824f, 0.686275f, 0.678431f, 
    0.850980f, 0.870588f, 0.780392f, 0.768627f, 0.764706f, 0.666667f, 0.835294f, 0.917647f, 
    1.000000f, 1.000000f, 0.937255f, 0.835294f, 0.839216f, 0.909804f, 0.956863f, 0.917647f, 
    0.976471f, 0.862745f, 0.827451f, 0.713726f, 0.529412f, 0.549020f, 0.564706f, 0.603922f, 
    0.619608f, 0.807843f, 0.670588f, 0.658824f, 0.701961f, 0.568627f, 0.568627f, 0.474510f, 
    0.564706f, 0.403922f, 0.474510f, 0.513726f, 0.423529f, 0.494118f, 0.525490f, 0.529412f, 
    0.376471f, 0.329412f, 0.305882f, 0.376471f, 0.333333f, 0.376471f, 0.329412f, 0.250980f, 
    0.196078f, 0.188235f, 0.152941f, 0.184314f, 0.145098f, 0.160784f, 0.180392f, 0.219608f, 
    0.203922f, 0.188235f, 0.364706f, 0.337255f, 0.313726f, 0.329412f, 0.294118f, 0.258824f, 
    0.262745f, 0.243137f, 0.447059f, 0.403922f, 0.329412f, 0.247059f, 0.470588f, 0.517647f, 
    0.360784f, 0.439216f, 0.529412f, 0.000000f,
    0.662745f, 0.411765f, 0.501961f, 0.827451f, 0.752941f, 0.960784f
};


float 
sample_color_green[SAMPLESIZE] = {
    0.329412f, 0.164706f, 0.180392f, 0.286275f, 0.294118f, 0.266667f, 0.301961f, 0.239216f, 
    0.211765f, 0.192157f, 0.207843f, 0.207843f, 0.211765f, 0.196078f, 0.141176f, 0.125490f, 
    0.192157f, 0.239216f, 0.235294f, 0.294118f, 0.270588f, 0.141176f, 0.137255f, 0.141176f, 
    0.156863f, 0.133333f, 0.129412f, 0.125490f, 0.188235f, 0.254902f, 0.317647f, 0.403922f, 
    0.466667f, 0.458824f, 0.517647f, 0.521569f, 0.419608f, 0.443137f, 0.407843f, 0.345098f, 
    0.333333f, 0.333333f, 0.341176f, 0.313726f, 0.313726f, 0.333333f, 0.317647f, 0.341176f, 
    0.345098f, 0.427451f, 0.368627f, 0.470588f, 0.533333f, 0.478431f, 0.470588f, 0.474510f, 
    0.631373f, 0.619608f, 0.592157f, 0.639216f, 0.666667f, 0.792157f, 0.737255f, 0.870588f, 
    0.819608f, 0.901961f, 0.929412f, 0.890196f, 0.913725f, 0.952941f, 0.917647f, 0.835294f, 
    0.890196f, 0.745098f, 0.725490f, 0.784314f, 0.764706f, 0.831373f, 0.737255f, 0.819608f, 
    0.639216f, 0.639216f, 0.713726f, 0.721569f, 0.674510f, 0.721569f, 0.607843f, 0.592157f, 
    0.529412f, 0.529412f, 0.501961f, 0.509804f, 0.505882f, 0.521569f, 0.529412f, 0.517647f, 
    0.572549f, 0.537255f, 0.670588f, 0.678431f, 0.650980f, 0.705882f, 0.580392f, 0.650980f, 
    0.772549f, 0.572549f, 0.603922f, 0.580392f, 0.568627f, 0.560784f, 0.698039f, 0.709804f, 
    0.682353f, 0.705882f, 0.862745f, 0.839216f, 0.874510f, 0.898039f, 0.870588f, 0.909804f, 
    0.898039f, 0.827451f, 0.854902f, 0.894118f, 0.901961f, 0.854902f, 0.764706f, 0.827451f, 
    0.717647f, 0.686275f, 0.552941f, 0.580392f, 0.713726f, 0.623529f, 0.533333f, 0.443137f, 
    0.384314f, 0.364706f, 0.364706f, 0.494118f, 0.329412f, 0.184314f, 0.309804f, 0.443137f, 
    0.396078f, 0.027451f, 0.200000f, 0.270588f, 0.305882f, 0.400000f, 0.396078f, 0.274510f, 
    0.411765f, 0.278431f, 0.247059f, 0.219608f, 0.000000f, 0.176471f, 0.345098f, 0.403922f, 
    0.521569f, 0.635294f, 0.650980f, 0.529412f, 0.580392f, 0.517647f, 0.756863f, 0.788235f, 
    0.709804f, 0.717647f, 0.576471f, 0.564706f, 0.658824f, 0.603922f, 0.482353f, 0.541176f, 
    0.427451f, 0.454902f, 0.376471f, 0.435294f, 0.560784f, 0.443137f, 0.513726f, 0.501961f, 
    0.517647f, 0.494118f, 0.541176f, 0.564706f, 0.498039f, 0.486275f, 0.525490f, 0.533333f, 
    0.650980f, 0.647059f, 0.678431f, 0.682353f, 0.650980f, 0.596078f, 0.592157f, 0.576471f, 
    0.709804f, 0.784314f, 0.733333f, 0.729412f, 0.792157f, 0.800000f, 0.760784f, 0.847059f, 
    0.800000f, 0.815686f, 0.600000f, 0.584314f, 0.568627f, 0.509804f, 0.396078f, 0.305882f, 
    0.309804f, 0.274510f, 0.305882f, 0.317647f, 0.266667f, 0.360784f, 0.372549f, 0.266667f, 
    0.364706f, 0.298039f, 0.407843f, 0.392157f, 0.474510f, 0.450980f, 0.376471f, 0.337255f, 
    0.305882f, 0.352941f, 0.317647f, 0.305882f, 0.298039f, 0.184314f, 0.098039f, 0.101961f, 
    0.090196f, 0.149020f, 0.141176f, 0.129412f, 0.141176f, 0.117647f, 0.113725f, 0.082353f, 
    0.090196f, 0.098039f, 0.223529f, 0.235294f, 0.250980f, 0.239216f, 0.211765f, 0.145098f, 
    0.188235f, 0.113725f, 0.184314f, 0.192157f, 0.074510f, 0.090196f, 0.094118f, 0.105882f, 
    0.035294f, 0.160784f, 0.000000f, 0.000000f,
    0.662745f, 0.411765f, 0.501961f, 0.827451f, 0.752941f, 0.960784f
};

float 
sample_color_blue[SAMPLESIZE] = {
    0.239216f, 0.160784f, 0.231373f, 0.345098f, 0.286275f, 0.247059f, 0.243137f, 0.149020f, 
    0.125490f, 0.094118f, 0.176471f, 0.152941f, 0.168627f, 0.172549f, 0.113725f, 0.109804f, 
    0.129412f, 0.129412f, 0.196078f, 0.278431f, 0.309804f, 0.129412f, 0.129412f, 0.156863f, 
    0.188235f, 0.133333f, 0.141176f, 0.133333f, 0.305882f, 0.415686f, 0.427451f, 0.647059f, 
    0.568627f, 0.533333f, 0.584314f, 0.631373f, 0.584314f, 0.415686f, 0.470588f, 0.368627f, 
    0.333333f, 0.356863f, 0.333333f, 0.309804f, 0.309804f, 0.298039f, 0.278431f, 0.266667f, 
    0.258824f, 0.352941f, 0.231373f, 0.450980f, 0.509804f, 0.454902f, 0.380392f, 0.349020f, 
    0.760784f, 0.729412f, 0.815686f, 0.800000f, 0.737255f, 0.945098f, 0.886275f, 0.819608f, 
    0.698039f, 0.843137f, 0.909804f, 0.898039f, 0.929412f, 0.956863f, 0.839216f, 0.772549f, 
    0.882353f, 0.709804f, 0.741176f, 0.882353f, 0.866667f, 0.901961f, 0.752941f, 0.862745f, 
    0.600000f, 0.690196f, 0.701961f, 0.709804f, 0.600000f, 0.647059f, 0.509804f, 0.474510f, 
    0.462745f, 0.403922f, 0.439216f, 0.474510f, 0.498039f, 0.537255f, 0.545098f, 0.509804f, 
    0.674510f, 0.517647f, 0.556863f, 0.643137f, 0.576471f, 0.537255f, 0.290196f, 0.298039f, 
    0.572549f, 0.403922f, 0.356863f, 0.243137f, 0.266667f, 0.376471f, 0.501961f, 0.490196f, 
    0.364706f, 0.349020f, 0.537255f, 0.647059f, 0.717647f, 0.670588f, 0.494118f, 0.643137f, 
    0.686275f, 0.490196f, 0.341176f, 0.313726f, 0.474510f, 0.368627f, 0.000000f, 0.000000f, 
    0.180392f, 0.215686f, 0.074510f, 0.000000f, 0.000000f, 0.180392f, 0.337255f, 0.160784f, 
    0.176471f, 0.137255f, 0.117647f, 0.211765f, 0.117647f, 0.000000f, 0.000000f, 0.090196f, 
    0.086275f, 0.047059f, 0.098039f, 0.133333f, 0.215686f, 0.266667f, 0.082353f, 0.105882f, 
    0.219608f, 0.196078f, 0.290196f, 0.117647f, 0.196078f, 0.090196f, 0.133333f, 0.129412f, 
    0.000000f, 0.129412f, 0.000000f, 0.176471f, 0.247059f, 0.000000f, 0.309804f, 0.498039f, 
    0.498039f, 0.647059f, 0.474510f, 0.345098f, 0.341176f, 0.419608f, 0.356863f, 0.239216f, 
    0.317647f, 0.368627f, 0.231373f, 0.631373f, 0.674510f, 0.478431f, 0.474510f, 0.505882f, 
    0.654902f, 0.568627f, 0.619608f, 0.670588f, 0.450980f, 0.427451f, 0.556863f, 0.517647f, 
    0.662745f, 0.643137f, 0.639216f, 0.678431f, 0.694118f, 0.662745f, 0.682353f, 0.600000f, 
    0.729412f, 0.839216f, 0.800000f, 0.858824f, 0.866667f, 0.843137f, 0.760784f, 0.843137f, 
    0.792157f, 1.000000f, 0.901961f, 0.752941f, 0.749020f, 0.713726f, 0.792157f, 0.682353f, 
    0.533333f, 0.462745f, 0.321569f, 0.431373f, 0.423529f, 0.513726f, 0.427451f, 0.231373f, 
    0.364706f, 0.278431f, 0.470588f, 0.474510f, 0.721569f, 0.721569f, 0.556863f, 0.572549f, 
    0.592157f, 0.654902f, 0.501961f, 0.505882f, 0.411765f, 0.419608f, 0.305882f, 0.298039f, 
    0.301961f, 0.478431f, 0.345098f, 0.250980f, 0.250980f, 0.160784f, 0.129412f, 0.172549f, 
    0.192157f, 0.203922f, 0.329412f, 0.360784f, 0.301961f, 0.247059f, 0.129412f, 0.094118f, 
    0.180392f, 0.117647f, 0.215686f, 0.278431f, 0.231373f, 0.156863f, 0.290196f, 0.176471f, 
    0.137255f, 0.388235f, 0.454902f, 0.000000f,
    0.662745f, 0.411765f, 0.501961f, 0.827451f, 0.752941f, 0.960784f
};

float 
square(float x)
{
    return x*x;
}

float 
distancesquare(float x1, float y1, float z1, float x2, float y2, float z2)
{
    return square(x1-x2) + square(y1-y2) + square(z1-z2);
}

int 
color_count()
{
    return SAMPLESIZE;
}

int 
nearest_color(int r, int g, int b)
{
    int i, imin = 0;
    float dsq, dsqmin = 3.0f;

    for (i = 0; i < SAMPLESIZE; i++) {
        dsq = distancesquare(lup255f[r], lup255f[g], lup255f[b], 
                             sample_color_red[i], sample_color_green[i], sample_color_blue[i]);
        if (dsq < dsqmin) {
            dsqmin = dsq;
            imin = i;
        }

        if (dsqmin == 0.0f) {
            break;
        }
    }

    return imin;
}

char* 
color_name(int index)
{
    return sample_color_name[index];
}

char* 
color_group(int index)
{
    return sample_color_group[index];
}

