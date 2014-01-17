//
//  QuizViewController.h
//  Quiz
//
//  Created by Moser, Wesley on 1/15/14.
//  Copyright (c) 2014 Moser, Wesley. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QuizViewController : UIViewController
{
    int currentQuestionIndex;
    
    // The model objects
    NSMutableArray *questions;
    NSMutableArray *answers;
}

- (IBAction)showAnswer:(id)sender;
- (IBAction)showQuestion:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *questionLabel;
@property (weak, nonatomic) IBOutlet UILabel *answerLabel;

@end
