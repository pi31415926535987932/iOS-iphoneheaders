/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedAlbum.h>

@interface PLWallpaperAlbum : PLManagedAlbum

@property (assign,nonatomic) short wallpaperAlbumType; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)wallpaperAlbumInLibrary:(id)arg1 ;
-(id)localizedTitle;
-(id)posterImage;
-(unsigned long long)photosCount;
-(void)awakeFromInsert;
-(id)_kindDescription;
@end

