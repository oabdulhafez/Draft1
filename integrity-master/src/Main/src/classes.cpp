
/* This file defines the constructor for the structures declare in "classes.h". */

#include "../header/classes.h"

Parameters::Parameters()
{
	numFrames= 5; // number of pcd files to read
	min_cluster_size= 18; //min # of points of each cluster. If less than this -> remove cluster
	min_plane_size= 100; // min # of points of each plane. If less than this -> do not extract plane
	min_density= 550; // min density of points of each cluster. If less dense than this -> remove cluster
	min_cluster_distance= 0.8; //1.5 when clustering, this is the minimum distance in between two clusters. If the distance is less than this, they won't be divide into two clusters
	xlim= 5.51; //6 points with x coordinate farther than this are removed
	ylim= 5.51; //6 points with y coordinate farther than this are removed
	zlim= -0.13; //0 points lower than 0.5m from the LIDAR height are removed (remove the ground points)
	cylinder_normal_distance_weight= 0.1; // RANSAC parameter. See documentation
	cylinder_max_radius= 0.2; //-- Extract cylinder with radius less than this only
	options_flag= false;
	SWITH_VOXEL_GRID= true;      // Downsample the point cloud using a voxel grid
	SWITH_WRITE_CLUSTERS= false; // Write the clusters to disk 
	plane_distance_threshold= 0.03; // RANSAC parameter. Max distance from a point to a plane so that such point is considered part of the plane
	plane_normal_distance_weight= 0.03; // RANSAC parameter. See documentation
	plane_RANSAC_max_iter= 20; // Max # of iterations for the plane extraction. RANSAC parameter.
	normal_radius_search= 0.1; // Create normals using points closer than this distance
	min_cylinder_size= 18; // extract cylinders with at least this # of points
	min_association_distance= 1.7; //2 a cylinder is associated to a landmark in the map if is closer than this distance
	rlim= 5.51; //6 points farther than this distance from the LIDAR are removed
}

Cylinder::Cylinder()
{}

Frame::Frame()
{}

Landmark::Landmark()
{}