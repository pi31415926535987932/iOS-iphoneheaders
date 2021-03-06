/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:30 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/NSCopying.h>

@class MKMapCamera;

@interface MKMapSnapshotOptions : NSObject <NSCopying> {

	MKMapCamera* _camera;
	SCD_Struct_MK2 _mapRect;
	SCD_Struct_MK2 _region;
	unsigned long long _mapType;
	int _mode;
	BOOL _showsPointsOfInterest;
	BOOL _showsBuildings;
	BOOL _rendersInBackground;
	CGSize _size;
	double _scale;
	BOOL _usingRect;

}

@property (nonatomic,copy) MKMapCamera * camera;                                                                                //@synthesize camera=_camera - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK2 mapRect;                                                                            //@synthesize mapRect=_mapRect - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK2 region;                                                                             //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) unsigned long long mapType;                                                                        //@synthesize mapType=_mapType - In the implementation block
@property (assign,nonatomic) BOOL showsPointsOfInterest;                                                                        //@synthesize showsPointsOfInterest=_showsPointsOfInterest - In the implementation block
@property (assign,nonatomic) BOOL showsBuildings;                                                                               //@synthesize showsBuildings=_showsBuildings - In the implementation block
@property (assign,nonatomic) CGSize size;                                                                                       //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                                                                                      //@synthesize scale=_scale - In the implementation block
@property (assign,setter=_setRendersInBackground:,getter=_rendersInBackground,nonatomic) BOOL rendersInBackground;              //@synthesize rendersInBackground=_rendersInBackground - In the implementation block
@property (nonatomic,readonly) BOOL usingRect;                                                                                  //@synthesize usingRect=_usingRect - In the implementation block
-(SCD_Struct_MK2)mapRect;
-(BOOL)usingRect;
-(BOOL)_rendersInBackground;
-(CGSize)size;
-(id)init;
-(double)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setRegion:(SCD_Struct_MK2)arg1 ;
-(SCD_Struct_MK2)region;
-(void)_setRendersInBackground:(BOOL)arg1 ;
-(void)setMapRect:(SCD_Struct_MK2)arg1 ;
-(unsigned long long)mapType;
-(void)setMapType:(unsigned long long)arg1 ;
-(BOOL)showsPointsOfInterest;
-(void)setShowsPointsOfInterest:(BOOL)arg1 ;
-(BOOL)showsBuildings;
-(void)setShowsBuildings:(BOOL)arg1 ;
-(MKMapCamera *)camera;
-(void)setCamera:(MKMapCamera *)arg1 ;
@end

