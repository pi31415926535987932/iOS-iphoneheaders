/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UITableViewHeaderFooterView.h>

@class UIView, UILabel, UIImageView;

@interface ThreadBannerView : UITableViewHeaderFooterView {

	UIView* _backgroundView;
	UILabel* _subjectLabel;
	UILabel* _alternateLabel;
	UIImageView* _notifyIcon;

}
+(float)defaultHeaderHeight;
-(void)setDisplayNotifyIcon:(char)arg1 ;
-(void)setAlternateText:(id)arg1 ;
-(CGRect)rectForNotifyIconWithBounds:(CGRect)arg1 ;
-(CGRect)rectForAlternateLabelWithBounds:(CGRect)arg1 iconRect:(CGRect)arg2 ;
-(CGRect)rectForSubjectWithBounds:(CGRect)arg1 alternateRect:(CGRect)arg2 iconRect:(CGRect)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setText:(id)arg1 ;
-(void)setTableView:(id)arg1 ;
-(void)setBackgroundView:(id)arg1 ;
-(id)backgroundView;
-(id)_label:(char)arg1 ;
@end

