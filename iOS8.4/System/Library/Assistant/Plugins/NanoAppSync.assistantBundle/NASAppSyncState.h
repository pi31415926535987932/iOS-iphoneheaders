/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/Plugins/NanoAppSync.assistantBundle/NanoAppSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoAppSync/NanoAppSync-Structs.h>
#import <NanoAppSync/NSCopying.h>
#import <NanoAppSync/NSCoding.h>

@class NSString, NASAppSyncPrimitiveAnchor, NASAppSyncAnchor, NSSet, NSArray;

@interface NASAppSyncState : NSObject <NSCopying, NSCoding> {

	NSString* _validity;
	NASAppSyncPrimitiveAnchor* _keyAnchor;
	NASAppSyncAnchor* _startAnchor;
	NASAppSyncAnchor* _stopAnchor;
	NSSet* _apps;
	NSArray* _deletes;

}

@property (nonatomic,copy,readonly) NSString * validity;                                //@synthesize validity=_validity - In the implementation block
@property (nonatomic,copy,readonly) NASAppSyncPrimitiveAnchor * keyAnchor;              //@synthesize keyAnchor=_keyAnchor - In the implementation block
@property (nonatomic,copy,readonly) NASAppSyncAnchor * startAnchor;                     //@synthesize startAnchor=_startAnchor - In the implementation block
@property (nonatomic,copy,readonly) NASAppSyncAnchor * stopAnchor;                      //@synthesize stopAnchor=_stopAnchor - In the implementation block
@property (nonatomic,copy,readonly) NSSet * apps;                                       //@synthesize apps=_apps - In the implementation block
@property (nonatomic,copy,readonly) NSArray * deletes;                                  //@synthesize deletes=_deletes - In the implementation block
-(NASAppSyncAnchor *)stopAnchor;
-(NASAppSyncPrimitiveAnchor *)keyAnchor;
-(id)initWithValidity:(id)arg1 keyAnchor:(id)arg2 startAnchor:(id)arg3 stopAnchor:(id)arg4 apps:(id)arg5 deletes:(id)arg6 ;
-(NSArray *)deletes;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_validate;
-(NASAppSyncAnchor *)startAnchor;
-(NSSet *)apps;
-(NSString *)validity;
@end

