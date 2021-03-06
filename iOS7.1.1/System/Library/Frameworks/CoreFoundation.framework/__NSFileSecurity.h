/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSFileSecurity.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@interface __NSFileSecurity : NSFileSecurity <NSCopying, NSCoding> {

	filesecRef _filesec;

}
+(id)__new:(filesecRef)arg1 ;
+(id)allocWithZone:(NSZone)arg1 ;
+(bool)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(filesecRef)_filesec;
-(bool)getOwner:(unsigned*)arg1 ;
-(bool)getGroup:(unsigned*)arg1 ;
-(bool)getMode:(unsigned short*)arg1 ;
-(bool)getOwnerUUID:(unsigned char*)arg1 ;
-(bool)setOwnerUUID:(unsigned char)arg1 ;
-(bool)getGroupUUID:(unsigned char*)arg1 ;
-(bool)setGroupUUID:(unsigned char)arg1 ;
-(bool)copyAccessControlList:(acl*)arg1 ;
-(bool)setAccessControlList:(aclRef)arg1 ;
-(bool)clearProperties:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)setMode:(unsigned short)arg1 ;
-(bool)setGroup:(unsigned)arg1 ;
-(void)finalize;
-(bool)setOwner:(unsigned)arg1 ;
@end

