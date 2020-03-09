pipeline{
    agent {
        docker {
            image 'python'
            label 'docker_node'
        }
    }
    stages {
        stage('Build') {
            steps {
                sh 'echo Python docker init complete'
            }
        }
        stage('Run') {
            steps {
                sh 'python main.py'
            }
        }
    }
}