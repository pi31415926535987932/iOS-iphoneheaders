/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PDLocationMap : NSObject {

	NSMutableDictionary* _locationsByUniqueID;

}
-(id)locationsForUniqueID:(id)arg1 ;
-(void)insertLocation:(id)arg1 forUniqueID:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end
