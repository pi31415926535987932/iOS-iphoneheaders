/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class VCVideoRule;

@interface VCBitrateRule : NSObject {

	unsigned _bitrate;
	int _connectionType;
	VCVideoRule* limitingRule;

}

@property (assign) unsigned bitrate;                                    //@synthesize bitrate=_bitrate - In the implementation block
@property (assign) int connectionType;                                  //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,readonly) VCVideoRule * limitingRule; 
-(void)dealloc;
-(id)description;
-(long long)compare:(id)arg1 ;
-(int)connectionType;
-(unsigned)bitrate;
-(void)setBitrate:(unsigned)arg1 ;
-(VCVideoRule *)limitingRule;
-(id)initWithBitrate:(unsigned)arg1 connectionType:(int)arg2 limitingRule:(id)arg3 ;
-(void)setConnectionType:(int)arg1 ;
@end
