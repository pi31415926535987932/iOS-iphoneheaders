/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class MessageContentLayer, MFAttachment;

@interface MessageQuicklookImageAttachmentsActivity : UIActivity {

	MessageContentLayer* _contentLayer;
	MFAttachment* _attachment;
	unsigned _index;

}
-(id)initWithContentLayer:(id)arg1 attachment:(id)arg2 index:(unsigned)arg3 ;
-(void)dealloc;
-(void)_cleanup;
-(id)activityType;
-(id)activityTitle;
-(char)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)activityImage;
-(id)_beforeActivity;
@end
