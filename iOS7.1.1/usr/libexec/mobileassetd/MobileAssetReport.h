/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/mobileassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <mobileassetd/mobileassetd-Structs.h>
@class NSString, NSDate, NSCalendar;

@interface MobileAssetReport : NSObject {

	NSString* _assetType;
	long long _assetArchiveSizeBytes;
	NSDate* _downloadStartDate;
	NSDate* _verificationStartDate;
	NSDate* _unarchivingStartDate;
	NSCalendar* _calendar;

}
-(double)_processingRate:(id)arg1 ;
-(void)downloadDidStart;
-(void)verificationDidStart;
-(void)verificationDidFinish;
-(void)unarchivingDidStart;
-(void)unarchivingDidFinish;
-(void)downloadDidFinish:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithAsset:(_MobileAsset*)arg1 ;
@end
