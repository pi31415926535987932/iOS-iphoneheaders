/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:11:12 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/XPCServices/com.apple.voicetrigger.voicetriggerservice.xpc/com.apple.voicetrigger.voicetriggerservice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VTXService <NSObject>
@required
-(oneway void)feedbackWithReason:(unsigned char)arg1 atTime:(double)arg2;
-(oneway void)getTestResponse:(/*^block*/id)arg1;
-(oneway void)getSiriLanguageCode:(/*^block*/id)arg1;
-(oneway void)suggestVoiceTriggerThreshold:(int)arg1 withReason:(id)arg2 timestamp:(double)arg3;
-(oneway void)enableVoiceTrigger:(char)arg1 withAssertion:(id)arg2 timestamp:(double)arg3;
-(oneway void)reportEventWithAudioFile:(id)arg1 metaDataFile:(id)arg2;
-(oneway void)resetAssertions;

@end
