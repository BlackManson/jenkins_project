pipeline{
    agent {
        docker {
            image 'gcc'
            label 'docker_node'
        }
    }
    stages {
        stage('Build') {
            steps {
                sh 'test gcc'
            }
        }
        stage('Run') {
            steps {
                sh 'gcc --version'
            }
        }
    }
}